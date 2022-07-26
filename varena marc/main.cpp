#include <iostream>

using namespace std;

int v[725001], n;

int marcare(int k)
{
    int i = 1, cnt = 1;
    v[i] = 1;
    while(v[(i+k)%n] != 1)
    {
        i = (i+k)%n;
        v[i] = 1;
        cnt++;
    }
    return n-cnt;
}

int main()
{
    int n, k, m, p, i;
    cin >> n >> k;
    m = marcare(k);

    return 0;
}
