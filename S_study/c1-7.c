#include <stdio.h>

int main(void)
{   
    int n, k;
    int pow=1;
    printf("��� n�� �Է�: ");
    scanf("%d", &n);

    if(n==0)
    {
        printf("�����ϴ� k���� �������� �ʽ��ϴ�. ");
        return 0;
    }
    for(k=0; pow*2<=n;k++)
        pow *= 2;
    printf("�ִ밪k = %d \n", k);
    return 0;
}