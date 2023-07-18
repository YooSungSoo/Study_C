#include <stdio.h>

int main(void) 
{
    int a, total=1, num;

    printf("Please enter number");
    scanf("%d",&a);
    
    for(int i=1; i<a+1; i++)
    {
        total = total*i;
    }    
    printf("%d",total);

    return 0;
}