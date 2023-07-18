#include <stdio.h>

int main(void)
{
    int a;
    printf("10진수 입력");
    scanf("%d",&a);
    printf("%d의 16진수는 %0X",a,a);
}