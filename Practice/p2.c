#include <stdio.h>

int dan(int a,int b)
{
    for(;a<b+1;a++)
    {
        for(int i=1;i<10;i++)
        {
            printf("%d X %d = %d\n",a,i,a*i);
        }
    }
}

int main(void)
{
    int a,b,c;
    printf("2개의 정수를 입력하시오\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    { 
        c=a;
        a=b;
        b=c;
    }
    dan(a,b);
    return 0;
}

