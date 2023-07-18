#include<stdio.h>

int main(void)
{
    int a;
    int sec=0,min=0,hour=0;
    printf("Enter second : \n");
    scanf("%d",&a);

    if((a/3600)>=1)
        {
            hour = (a/3600);
            a = a - (hour*3600);
            if((a/60)>=1)
            {
                min = (a/60);
                a = a- (min*60);
                sec = a;
                printf("%d hour %d min %d sec",hour,min,sec);
            }
        }
    else 
    {
        min = (a/60);
        a = a - (min*60);
        sec = a;
        printf("%d hour %d min %d sec",hour,min,sec);
    }
    return 0;
}

