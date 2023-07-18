#include<stdio.h>

int A(int a)
{
    int num=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
            num++;
    }
    if(num==2)
            printf("%d ",a);
}

int main(void)
{
    for(int i=1;i<100;i++)
        A(i);
 
    return 0;
}

