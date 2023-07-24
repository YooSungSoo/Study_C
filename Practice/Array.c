#include <stdio.h>

int main(void)
{
    char Arr[50];
    int i=0;
    printf("Enter word : ");
    scanf("%s",Arr);

    while(1)
    {
        printf("%c\n",Arr[i]);
        i++;

        if(Arr[i]=='\0')
        {
            break;
        }
    }


    printf("%s",Arr);
        return 0;
}