#include <stdio.h>

int main(void)
{
    int a,b,c;
    double avg;
    printf("���� ���� ���������� ���ʴ�� �����ÿ�");
    scanf("%d %d %d",&a,&b,&c);

    avg = (a+b+c)/3.0 ;

    if(avg>=90)
        printf("A");
    else if(avg>=80)
        printf("B");
    else if(avg>=70)
        printf("C");
    else if(avg>=60)
        printf("D");
    else 
        printf("F");

    return 0;    
}