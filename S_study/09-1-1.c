#include <stdio.h>

int getMaxNum(int n1, int n2, int n3);
int getMinNum(int n1, int n2, int n3);

int main(void)
{   
    int n1, n2, n3;
    int max, min;
    printf("3���� ������ ������ �ΰ� �Է�: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    max = getMaxNum(n1,n2,n3);
    min = getMinNum(n1,n2,n3);
    printf("�� ���� ������ ���� ū ��: %d \n", max);
    printf("�� ���� ������ ���� ���� ��: %d \n", min);
    return 0;
}

int getMaxNum(int n1, int n2, int n3)
{
    if (n1 > n2)
        if (n1 > n3)
            return n1;
        else
            return n3;
    else
        if (n2 > n3)
            return n2;
        else
            return n3;
}

int getMinNum(int n1, int n2, int n3)
{
    if (n1 > n2)
        if (n2 > n3)
            return n3;
        else
            return n2;
    else
        if (n1 > n3)
            return n3;
        else
            return n1;
}