#include <stdio.h>

int main(void)
{
    int sum=0 , num=0;

    while(1)
    {
        sum = sum + num;
        

        if(sum>5000)
            break;

        num++;
    }
    printf("sum = %d num = %d",sum,num);

    return 0;
}