#include <stdio.h>

int main(void)
{
    int a=0,total=0,i=0,b=0;

    printf("� �Է�?\n");
    scanf("%d",&a);
    
    while(i<a)
    {
        printf("�����Է�\n");
        scanf("%d",&b);
        total += b;
        i++;

    }
    printf("�Է°��� ��� = %f",(double)total/a);

    return 0;
}