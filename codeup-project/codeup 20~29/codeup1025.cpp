#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    printf("[%05d]\n[%04d]\n[%03d]\n[%02d]\n[%01d]", a*10000, b*1000, c*100, d*10, e);
    return 0;
}

