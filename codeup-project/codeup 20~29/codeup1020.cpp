#include <stdio.h>
int main()
{
    int h, m;
    scanf("%d-%d", &h, &m);
    printf("%06d%06d", h, m);
    return 0;
}

