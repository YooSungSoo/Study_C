#include <stdio.h>

int main(void)
{
    int total;
    int num=0, a;
    printf("enter 5 number\n");
    while(num<5)
    {
        a=0;
        scanf("%d",&a);
        total += a;
        num++;
    }
    printf("Total = %d",total);
    return 0;
}