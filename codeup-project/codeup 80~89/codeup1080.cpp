#include <stdio.h>
int main() {
    int a, i, s=0;
    i=0;
    scanf("%d", &a);
    while(s<a)
    {
        i=i+1;
        s=s+i;
    }
    printf("%d",i);
    return 0;
}

