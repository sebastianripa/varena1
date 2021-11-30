#include <iostream>

using namespace std;

int main()
{
    int n, i, j = 1, nr = 1, r = 1;
    cin >> n;
    nr = n;
    while(nr < 10)
    {
        nr = n;
        for(i = 1; i <= j; i++)
        {
            cout << nr;
            nr += n;
        }
        cout << '\n';
        j++;
    }
    nr = 1;
    while(r < n)
    {
        j = 1;
        nr = 1;
        while(nr < 10)
        {
            nr = r;
            for(i = 1; i <= j; i++)
            {
                cout << nr;
                nr += n;
            }
            j++;
            cout << '\n';
        }
        r++;
    }
    return 0;
}
