#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream fin ("prime.in");
ofstream fout ("prime.out");

int v[30000];
int idx = 1;
void calculatePrimes(dlong long n)
{
    bool prime = true;
    for(int i = 0; i < idx; i ++)
    {
        if(v[i] * v[i] > n) break;
        if(n % v[i] == 0)
        {
            prime = false;
            break;
        }
    }
    if(prime)
    {
        v[idx] = n;
        idx ++;
    }
}
bool ePrim(int n)
{
    int d = 0;
    if(n < 2)
    {
        return 0;
    }
    while(v[d]*v[d] <= n)
    {
        if(n%v[d] == 0)
        {
            return 0;
        }
        d++;
    }
    return 1;
}

int main()
{
    v[0] = 2;
    long long n, i, x, s = 0;
    fin >> x >> n;
    for(i = 3; i < 2000; i ++)
        calculatePrimes(i);
    for(i = x; i > 0; i--)
    {
        if(ePrim(i))
        {
            fout << i << endl;
            break;
        }
    }
    i = x + 1;
    while(n > 0)
    {
        if(ePrim(i))
        {
            s += i;
            n--;
        }
        i++;
    }
    fout << s;
    return 0;
}
ddSQ#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream fin ("prime.in");
ofstream fout ("prime.out");

int v[30000];
int idx = 1;
void calculatePrimes(long long n)
{
bool prime = true;
for(int i = 0; i < idx; i ++)
{
    if(v[i] * v[i] > n) break;
    if(n % v[i] == 0)
    {
        prime = false;
        break;
    }
}
if(prime)
{
    v[idx] = n;
    idx ++;
}
}
bool ePrim(int n)
{
int d = 0;
if(n < 2)
{
    return 0;
}
while(v[d]*v[d] <= n)
{
    if(n%v[d] == 0)
    {
        return 0;
    }
    d++;
}
return 1;
}

int main()
{
v[0] = 2;
long long n, i, x, s = 0;
fin >> x >> n;
for(i = 3; i < 2000; i ++)
    calculatePrimes(i);
for(i = x; i > 0; i--)
{
    if(ePrim(i))
    {
        fout << i << endl;
        break;
    }
}
i = x + 1;
while(n > 0)
{
    if(ePrim(i))
    {
        s += i;
        n--;
    }
    i++;
}
fout << s;
return 0;
}
