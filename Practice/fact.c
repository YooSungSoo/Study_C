#include <stdio.h>

int fac(int num)
{
    if (num==0)
        return 1;

    else 
        return num * fac(num-1);
}

int main(void)
{
    for(int i=1; i<11;i++)
    {
        printf("%d factorial =  %d\n",i,fac(i));
    }
}