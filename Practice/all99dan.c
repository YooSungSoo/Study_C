#include <stdio.h>

int main(void)
{
    int cur=2, is=0;

    while(cur<10)
    {
     is =1; //�ٽ� �ʱ�ȭ
       while(is<10)
       {
            printf("%d X %d = %d\n",cur,is,cur*is);
        is++;
       }
       cur++;
    }

    return 0;
}
