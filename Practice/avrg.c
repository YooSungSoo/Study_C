#include <stdio.h>

int main(void)
{
    int a=0,total=0,i=0,b=0;

    printf("몇개 입력?\n");
    scanf("%d",&a);
    
    while(i<a)
    {
        printf("정수입력\n");
        scanf("%d",&b);
        total += b;
        i++;

    }
    printf("입력값의 평균 = %f",(double)total/a);

    return 0;
}