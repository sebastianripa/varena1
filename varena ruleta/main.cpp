#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("ruleta.in");
ofstream fout ("ruleta.out");

int main()
{
    int p, i, j;
    fin >> p;
    int vn[p], v[p], n = p - 1, nmin = 1;

    fin >> v[0];
    vn[0] = 0;

    for(i = 1; i < p; i++)
    {
        fin >> v[i];
        vn[i] = 0;

        if ((p - 1) % i != 0)
        {
            vn[i] = 1;
        }
        bool nminset = false;
        for(j = nmin; j <= i; j++)
        {
            if(v[i] != v[i - j])
            {
                vn[j] = 1;
            }
            if (vn[j] == 0 && nminset == false)
            {
                nmin = j;
                nminset = true;
            }
            if (i == p - 1 && vn[j] == 0)
            {
                fout << j;
                return 0;
            }
        }
        if (nminset == false)
        {
            nmin = i + 1;
        }
    }
    return 0;
}
