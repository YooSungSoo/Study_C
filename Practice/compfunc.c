#include <stdio.h>

int Compare(int a, int b)
{
    if(a>b)
        return a;
    else return b;
}

int main(void)
{
    printf("3�� 7�߿� �� ū ���� %d �̴�.\n",Compare(3,7));
    printf("26�� 15�߿� �� ū ���� %d �̴�.",Compare(26,15));
    return 0;
}
