#include <stdio.h>

int main(void)
{
    int a,b;
    printf("Please enter two number");
    scanf("%d %d",&a,&b);

    if(a>b)
        printf("%d - %d = %d",a,b,a-b);

    else if (a<b)
        printf("%d - %d = %d",b,a,b-a);

    else 
        printf("0");
        
}