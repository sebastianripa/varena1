#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream fin ("numere4.in");
ofstream fout ("numere4.out");

int main()
{
    int n, x, i, j, l, prim3 = 0, dp, pp;

    fin >> n;
    for(i = 0; i < n; i++)
    {
        fin >> x;
        pp = 1;
        dp = 0;
        for(j = 2; j <= x/2; j++)
        {
            if(x%j == 0)
            {
                // j este divizorul lui x
                bool ePrim = true;
                for(l = 2; l <= sqrt(j); l++)
                {
                    if(j%l == 0)
                    {
                        ePrim = false;
                        break;
                    }
                }

                if(ePrim)
                {
                    if (dp < 3)
                    {
                        pp *= j;
                        dp++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        if (pp == x && dp == 3)
        {
            prim3++;
        }
    }
    fout << prim3;
    return 0;
}
