#include <stdio.h>

int main(void)
{
    char a = 9;
    int num = 10;
    double dnum = 3.141592;

    printf("���� char�� ũ�� %d\n",sizeof(char));
    printf("���� short�� ũ�� %d\n",sizeof(short));
    printf("���� int�� ũ�� %d\n",sizeof(int));
    printf("���� double�� ũ�� %d\n",sizeof(double));
    printf("���� long�� ũ�� %d\n",sizeof(long));
    printf("���� long long�� ũ�� %d\n",sizeof(long long));
    return 0;
}
