#include <iostream>

using namespace std;

int main()
{
    int n, x, ogx, i, cx, pc;
    cin >> n >> x;
    for(i = 2; i <= n; i++)
    {
        ogx = x;
        cin >> x;
        cx = x;
        while(cx)
        {
            if(cx < 10)
                pc = cx;
            cx /= 10;
        }
        if(pc == ogx%10)
            cout << ogx << ' ' << x << '\n';
    }
    return 0;
}
