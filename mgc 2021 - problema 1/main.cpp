#include <iostream>

using namespace std;

int v1[10], v2[10];

int main()
{
    int y1, m1, d1, m2, y2, d2, i = 1, dd;
    char d11, d12, d13, d14, d15, d16, d17, d18, d21, d22, d23, d24, d25, d26, d27, d28, c;
    cin.get(d11);
    cin.get(d12);
    cin.get(d13);
    cin.get(d14);
    cin.get(d15);
    cin.get(d16);
    cin.get(d17);
    cin.get(d18);
    cin.get(c);
    cin.get(d21);
    cin.get(d22);
    cin.get(d23);
    cin.get(d24);
    cin.get(d25);
    cin.get(d26);
    cin.get(d27);
    cin.get(d28);
    cin >> dd;
    d11 -= 48;
    d12 -= 48;
    d13 -= 48;
    d14 -= 48;
    d15 -= 48;
    d16 -= 48;
    d17 -= 48;
    d18 -= 48;
    d21 -= 48;
    d22 -= 48;
    d23 -= 48;
    d24 -= 48;
    d25 -= 48;
    d26 -= 48;
    d27 -= 48;
    d28 -= 48;
    d1 = d11*10 + d12;
    m1 = d13*10 + d14;
    y1 = d15*1000 + d16*100 + d17*10 + d18;
    v1[i] = d1*1000000 + m1*10000 + y1;
    d2 = d21*10 + d22;
    m2 = d23*10 + d24;
    y2 = d25*1000 + d26*100 + d27*10 + d28;
    v2[i++] = d2*1000000 + m2*10000 + y2;
    d1 = d13*10 + d14;
    m1 = d11*10 + d12;
    y1 = d15*1000 + d16*100 + d17*10 + d18;
    v1[i] = d1*1000000 + m1*10000 + y1;
    d2 = d23*10 + d24;
    m2 = d21*10 + d22;
    y2 = d25*1000 + d26*100 + d27*10 + d28;
    v2[i++] = d2*1000000 + m2*10000 + y2;
    d1 = d11*10 + d12;
    m1 = d17*10 + d18;
    y1 = d13*1000 + d14*100 + d15*10 + d16;
    v1[i] = d1*1000000 + m1*10000 + y1;
    d2 = d21*10 + d22;
    m2 = d27*10 + d28;
    y2 = d23*1000 + d24*100 + d25*10 + d26;
    v2[i++] = d2*1000000 + m2*10000 + y2;
    d1 = d17*10 + d18;
    m1 = d11*10 + d12;
    y1 = d13*1000 + d14*100 + d15*10 + d16;
    v1[i] = d1*1000000 + m1*10000 + y1;
    d2 = d27*10 + d28;
    m2 = d21*10 + d22;
    y2 = d23*1000 + d24*100 + d25*10 + d26;
    v2[i++] = d2*1000000 + m2*10000 + y2;
    d1 = d15*10 + d16;
    m1 = d17*10 + d18;
    y1 = d11*1000 + d12*100 + d13*10 + d14;
    v1[i] = d1*1000000 + m1*10000 + y1;
    d2 = d25*10 + d26;
    m2 = d27*10 + d28;
    y2 = d21*1000 + d22*100 + d23*10 + d24;
    v2[i++] = d2*1000000 + m2*10000 + y2;
    d1 = d17*10 + d18;
    m1 = d15*10 + d16;
    y1 = d11*1000 + d12*100 + d13*10 + d14;
    v1[i] = d1*1000000 + m1*10000 + y1;
    d2 = d27*10 + d28;
    m2 = d25*10 + d26;
    y2 = d21*1000 + d22*100 + d23*10 + d24;
    v2[i++] = d2*1000000 + m2*10000 + y2;
    m1;
    return 0;
}
