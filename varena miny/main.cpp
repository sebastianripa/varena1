#include <fstream>

using namespace std;

ifstream fin ("miny.in");
ofstream fout ("miny.out");

int main()
{
    int n, x, i;
    long long p = 1;
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> x;
        p *= x;
    }
    fout << (p%100)/10;
    return 0;
}
