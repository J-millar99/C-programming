#include <stdio.h>

int MaxOfThree(int n1, int n2, int n3);
int MinOfThree(int n1, int n2, int n3);

int main(void)
{
    int n1, n2, n3;

    printf("세 정수를 입력: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("세 수 중 가장 큰 값: %d\n",MaxOfThree(n1,n2,n3));
    printf("세 수 중 가장 작은 값: %d\n",MinOfThree(n1,n2,n3));
    return 0;
}

int MaxOfThree(int n1, int n2, int n3)
{
    int maxnum = n1;

    if (n1 < n2)
    {
        maxnum = n2;
        if (n2 < n3)
            maxnum = n3;
    }
    else
    {
        if (n1 < n3)
            maxnum = n3;
    }
    return maxnum;
}

int MinOfThree(int n1, int n2, int n3)
{
    int minnum = n1;

    if (n1 > n2)
    {
        minnum = n2;
        if (n2 > n3)
            minnum = n3;
    }
    else
    {
        if (n1 > n3)
            minnum = n3;
    }
    return minnum;
}