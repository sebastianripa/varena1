#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("aproape.in");
ofstream fout ("aproape.out");

int main()
{
    long long c, n, nrc = 0, nra = 0;
    cin >> c >> n;
    if(c == 1)
    {
        if(n == 0)
            fout << 1;
        else
        {
            while(n)
            {
                nrc++;
                n /= 10;
            }
            fout << nrc;
        }
    }
    else if(c == 2)
    {
        if(n == 0)
            cout << 1;
        else
        {
            while(n)
            {
                if(n%10 == 9 || n%10 == 0)
                    nra++;
                else if(n == 1)
                    nra++;
                else
                    nra += 2;
                n /= 10;
            }
            cout << nra;
        }
    }
    return 0;
}
