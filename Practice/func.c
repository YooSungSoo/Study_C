#include <stdio.h>

int Add(int a, int b)
{
    return a+b;
}   

int main(void)
{
    int result = Add(3,4);
    printf("%d",result);
}