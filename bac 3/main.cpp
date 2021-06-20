#include <fstream>

using namespace std;

ifstream fin ("bac.in");
ofstream fout ("bac.out");

int vf[10];

int main()
{
    int x, i, j;
    while(fin >> x)
    {
        while(x)
        {
            vf[x%10]++;
            x /= 10;
        }
    }
    for(i = 9; i >= 0; i--)
    {
        for(j = 1; j <= vf[i]; j++)
            fout << i << ' ';
    }
    return 0;
}
