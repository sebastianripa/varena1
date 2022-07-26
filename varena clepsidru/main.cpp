#include <iostream>

using namespace std;

int v[10005], vb[10005];

int main()
{
    int n, b, k, s, p, lp;
    cin >> n >> b >> k >> s >> p;
    cout << b + n - 1 << '\n';
    v[1] = b;
    if(p == 1)
    {
        while(s)
        {
            for(int i = 1; i <= n*2; i += 2)
            {
                if(i != n*2)
                {
                    if(v[i] > 0)
                    {
                        if(i == 1)
                        {
                            v[i+2] = 1;
                            vb[i+2] = 1;
                            v[i]--;
                        }
                        if(i != n*2-1)
                        {
                            v[i+2] = 1;
                            v[i] = 0;
                        }
                        else
                        {
                            v[n*2] = v[n*2] + v[n*2-1];
                            v[n*2-1] = 0;
                        }
                    }
                }
            }
            s--;
        }
    }
    for(int i = 1; i <= k; i++)
    {
        cin >> s >> p;
    }
    return 0;
}
