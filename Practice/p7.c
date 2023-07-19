#include <stdio.h>

int main(void)
{
    printf("U have 3,500won\n");
    int A,B,C,i,j,k;
    A = 3500 / 500;
    B = 3500 / 700;
    C = 3500 / 400;
    
    for(i=1;i<A;i++)
    {
        for(j=1;j<B;j++)
        {
            for(k=1;k<C;k++)
            {
                if((500*i+700*j+400*k)==3500)
                printf("500won %d 700won %d 400won %d \n",i,j,k);
            }
        }
    }
}