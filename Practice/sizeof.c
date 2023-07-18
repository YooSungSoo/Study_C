#include <stdio.h>

int main(void)
{
    char a = 9;
    int num = 10;
    double dnum = 3.141592;

    printf("변수 char의 크기 %d\n",sizeof(char));
    printf("변수 short의 크기 %d\n",sizeof(short));
    printf("변수 int의 크기 %d\n",sizeof(int));
    printf("변수 double의 크기 %d\n",sizeof(double));
    printf("변수 long의 크기 %d\n",sizeof(long));
    printf("변수 long long의 크기 %d\n",sizeof(long long));
    return 0;
}
