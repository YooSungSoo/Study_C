#include <stdio.h>

int main(void)
{
    int i=0;
    char Arr[50];
    printf("Enter word : ");
    scanf("%s",Arr);
    printf("\n");
    printf("your word : %s\n",Arr);

    while(Arr[i] !='\0')
    {
        printf("%c",Arr[i]);
        i++;
    }
    return 0;
}