#include <bits/stdc++.h>

using namespace std;

ifstream fin ("balba.in");
ofstream fout ("balba.out");

int vf[10], v[10];

void rezolvare2()
{
    long long i, j = 1, d;
    bool imp = false, intrare = false, af = false;
    for(i = 9; i >= 0; i--)
    {
        if(vf[i] > 0)
        {
            if(vf[i]%2 == 0)
            {
                if(i > 0)
                    intrare = true;
                else
                {
                    if(intrare == false)
                        continue;
                }
                for(j = 1; j <= vf[i]/2; j++)
                    fout << i;
                af = true;
            }
            else if(!imp && vf[i] > 2)
            {
                for(j = 1; j <= vf[i]/2+1; j++)
                    fout << i;
                d = i;
                imp = true;
                af = true;
            }
        }
    }
    if(imp == false && af == true)
    {
        for(i = 1; i <= 9; i++)
        {
            if(vf[i] > 0)
            {
                vf[i]--;
                break;
                af = true;
            }
        }
    }
    if(af == false)
    {
        for(i = 9; i >= 1; i--)
        {
            if(vf[i] > 0)
            {
                fout << i;
                break;
            }
        }
    }
    else
    {
        for(i = 0; i <= 9; i++)
        {
            if(vf[i] > 0)
            {
                if(vf[i]%2 == 0)
                {
                    if(i > 0)
                        intrare = true;
                    else
                    {
                        if(intrare == false)
                            continue;
                    }
                    for(j = 1; j <= vf[i]/2; j++)
                        fout << i;
                }
                else if(i == d)
                {
                    for(j = 1; j <= vf[i]/2; j++)
                        fout << i;
                    d = i;
                    imp = true;
                }
            }
        }
    }
    return;
}

int main()
{
    long long c, n, x, ogx, i, nrc = 0, nrb = 0;
    bool b = false;
    fin >> c >> n >> x;
    nrc++;
    vf[x]++;
    for(i = 2; i <= n; i++)
        {
            ogx = x;
            fin >> x;
            vf[x]++;
            if(ogx == x)
                b = true;
            else
            {
                if(b == true)
                    nrb++;
                nrc++;
                b = false;
            }
        }
    if(c == 1)
    {
        if(b == true)
            nrb++;
        fout << nrc << '\n' << nrb;
    }
    else
        rezolvare2();
    return 0;
}
