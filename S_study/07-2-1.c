#include <stdio.h>

int main(void)
{
    int num=0, i=1, sum=0;
    while(i <= 5)
    {
        while(num <= 0)
        {
            printf("���� �ϳ��� �Է� %d��° : ", i);
            scanf("%d", &num);
        }
        sum += num;
        i++;
        num = 0;
    }
    printf("�� ��: %d \n", sum);
    return 0;
}