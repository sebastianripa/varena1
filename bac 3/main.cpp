#include <bits/stdc++.h>

using namespace std;

ifstream fin ("bac.in");

int main()
{
    int n, scc = 0, ls = 1, lsm = 0, cn, sc = 0;
    while(fin >> n)
    {
        cn = n;
        sc = 0;
        while(n)
        {
            sc += n%10;
            n /= 10;
        }
        if(scc == sc)
            ls++;
        if(scc != sc && ls == 0)
            scc = sc;
        else if(scc != sc)
        {
            lsm = max(lsm, ls);
            ls = 1;
        }
    }
    cout << lsm;
    return 0;
}
