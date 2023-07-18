#include <stdio.h>

int Compare(int a, int b)
{
    if(a>b)
        return a;
    else return b;
}

int main(void)
{
    printf("3과 7중에 더 큰 수는 %d 이다.\n",Compare(3,7));
    printf("26과 15중에 더 큰 수는 %d 이다.",Compare(26,15));
    return 0;
}
