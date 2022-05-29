#include<stdio.h>
int main()
{
    int a;
    
    scanf("%d", &a);
    if(90<=a){
        printf("A");
    }
    else if(90>a&&70<=a){
        printf("B");
    }
    else if(70>a&&40<=a){
        printf("C");
    }
    else if(40>a&&0<=a){
        printf("D");
    }
    return 0;
}

