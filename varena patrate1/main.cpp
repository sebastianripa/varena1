#include <fstream>

using namespace std;

ifstream fin ("patrate1.in");
ofstream fout ("patrate1.out");

char a[1000][1000];

int main()
{
    int n, m = 1, i, j, ci, cj, nrp = 0, p1,p2;
    bool gheorghita = true;
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            fin >> a[i][j];
            if(a[i][j] == '0')
            {
                gheorghita = false;
                p1 = i;
                p2 = j;
            }
        }
    }
    if(gheorghita)
        nrp++;
    while(m < n)
    {
        for(i = 1; i <= n-m+1; i++)
        {
            for(j = 1; j <= n-m+1; j++)
            {
                gheorghita = true;
                if(p1 <= i+m-1 && p1 >= i)
                {
                    if(p2 <= j+m-1 && p2 >= j)
                        continue;
                }
                for(ci = i; ci <= i+m-1; ci++)
                {
                    for(cj = j; cj <= j+m-1; cj++)
                    {
                        if(a[ci][cj] == '0')
                        {
                            gheorghita = false;
                            break;
                        }
                    }
                    if(!gheorghita)
                        break;
                }
                if(gheorghita)
                    nrp++;
            }
        }
        m++;
    }
    fout << nrp;
    return 0;
}
