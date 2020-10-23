#include <fstream>

using namespace std;

ifstream fin ("cub1.in");
ofstream fout ("cub1.out");

int v[51];

int main()
{
    int n, x, i, nrc = 0;
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> x;
        if(v[x] == 0)
        {
            nrc++;
            v[x] = 0;
        }
    }
    fout << nrc;
    return 0;
}
