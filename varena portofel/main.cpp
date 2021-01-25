#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin ("portofel.in");
ofstream fout ("portofel.out");

int vf[100001];

int main()
{
    int n, x, i, m = 0;
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> x;
        vf[x]++;
    }
    fin >> m;
    for(i = 1; i <= m; i++)
    {
        fin >> x;
        vf[x]++;
    }
    for(i = 1; i <= 1000; i++)
    {
        if(vf[i] > m)
            m = vf[i];
    }
    fout << m;
    return 0;
}
