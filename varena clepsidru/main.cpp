#include <iostream>

using namespace std;

int v[2001];

int main()
{
    int c, b, n, s = 1, i, sec, st, j;
    cin >> c >> b >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> sec >> st;
        if(s != st)
        {
            reverse(v+1, v+n+1);
            for(j = 2; j <= n; j++)
            {
                if(v[j] != 0)
                {
                    v[j+1] = v[j];
                    v[j] = 0;
                }
            }
        }
    }
    return 0;
}
