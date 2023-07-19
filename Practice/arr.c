#include <stdio.h>

int main(void)
{
    char str[] = "Good morning!";
    printf(str);
    printf("Size of Arr : %d\n",sizeof(str));
    printf("Output Null : %c\n",str[13]);
    
    str[12]='?';
    printf(str);
    return 0;
}