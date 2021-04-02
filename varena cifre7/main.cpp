#include <fstream>

using namespace std;

ifstream fin ("cifre7.in");
ofstream fout ("cifre7.out");

int v1[10], v2[10], vs[10];

int main()
{
    long long n, x, y, c, nrcs = 0, i, j, k, p, nrm = 0, nr = 0;
    fin >> p >> n;
    for(j = 1; j <= n; j++)
    {
        fin >> x >> y;
        nr = 0;
        for(i = 0; i <= 9; i++)
        {
            v1[i] = 0;
            v2[i] = 0;
            vs[i] = 0;
        }
        while(x)
        {
            v1[x%10]++;
            x /= 10;
        }
        while(y)
        {
            v2[y%10]++;
            y /= 10;
        }
        for(i = 1; i <= 9; i++)
        {
            if(v1[i] > v2[i])
                vs[i] = v2[i];
            else if(v1[i] <= v2[i])
                vs[i] = v1[i];
        }
        if(p == 1)
        {
            for(i = 1; i <= 9; i++)
            {
                if(vs[i] != 0)
                {
                    nrcs++;
                    break;
                }
            }
        }
        else
        {
            for(i = 9; i >= 0; i--)
            {
                if(vs[i] != 0)
                {
                    while(vs[i])
                    {
                        nr = nr*10 + i;
                        vs[i]--;
                    }
                }
            }
            if(nrm < nr)
                nrm = nr;
        }
    }
    if(p == 1)
        fout << nrcs;
    else
        fout << nrm;
    return 0;
}
