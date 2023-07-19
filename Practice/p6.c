#include <stdio.h>

int A(int a, int result)
{
    if(a==0) return result;
    result = 2 * result;
    A(a-1,result);
}

int main(void)
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("2^%d = %d",num,A(num,1));
    return 0;
}