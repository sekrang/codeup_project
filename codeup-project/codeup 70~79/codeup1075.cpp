#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    while(n!=0)
    {
        if(n==0)
            return 0;
        if(n!=0)
            n=n-1;
            printf("%d\n", n);
    }
}


