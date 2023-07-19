#include <stdio.h>
#include <math.h>

int Find(int a)
{
    int i=1;
    int k=0;
    for(i;i<100;i++)
    {
        if(pow(2,i) <= a)
        {
            k++;
        }
    }
    return k;
}

int main(void)
{
    int num;
    printf("Enter num : ");
    scanf("%d",&num);
    printf(" 2^k <= num , max k = %d ",Find(num));
    return 0;
}