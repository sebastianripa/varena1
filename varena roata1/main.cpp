#include <fstream>

using namespace std;

ifstream fin ("roata1.in");
ofstream fout ("roata1.out");

int v[50001];

int main()
{
    int n, i, nr, maxi = 0, c = 1;
    fin >> n;
    for(i = 1; i <= n; i++)
        fin >> v[i];
    while(c <= n)
    {
        int nrpasi = 0;
        if(v[i] != c)
        {
            while(v[i] != c)
            {
                i--;
                if(i == 0)
                    i = n;
                nrpasi++;
            }
            while(nrpasi <= maxi
                  )
                nrpasi += n;
        }
        else
            nrpasi = n;
        if(nrpasi > maxi)
            maxi = nrpasi;
        fout << nrpasi << " ";
        c++;
    }
    return 0;
}
