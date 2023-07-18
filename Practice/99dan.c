#include <stdio.h>

int main(void)
{
    int dan=0,a=1;
    printf("¸î ´Ü?\n");
    scanf("%d",&dan);
    
    while(a<10)
    {
        printf("%d X %d = %d\n", dan,a,dan*a);
        a++;
    }
    return 0;
}