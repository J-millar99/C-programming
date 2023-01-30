#include <stdio.h>

int getMaxNum(int n1, int n2, int n3);
int getMinNum(int n1, int n2, int n3);

int main(void)
{   
    int n1, n2, n3;
    int max, min;
    printf("3개의 정수를 공백을 두고 입력: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    max = getMaxNum(n1,n2,n3);
    min = getMinNum(n1,n2,n3);
    printf("세 개의 정수중 가장 큰 값: %d \n", max);
    printf("세 개의 정수중 가장 작은 값: %d \n", min);
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