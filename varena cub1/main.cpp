#include <fstream>

using namespace std;

ifstream fin ("cub1.in");
ofstream fout ("cub1.out");

int v[51], vn[51], vm[51], vf[51], v;

int main()
{
    int n, x, i, nrc = 0, maxi = 1;
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> x;
        vn[x]++;
        if(vf[x] == 0)
        {
            nrc++;
            vf[x] = 1;
        }
        v[i] = x;
    }
    fout << nrc << '\n';
    for(i = 1; i <= n; i++)
    {
        if(maxi < vn[i])
            maxi = vn[i];
    }
    for(i = 1; i <= n; i++)
    {
        if(maxi == vn[i])
            fout << i << " ";
    }
    fout << '\n';
    return 0;
}
