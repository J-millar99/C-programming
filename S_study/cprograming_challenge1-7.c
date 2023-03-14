#include <stdio.h>

int PowToTwo(int k)
{
    if (k == 0)
        return 1;
    else
        return 2 * PowToTwo(k-1);
}

int main(void)
{
    int n, k = 0;

    printf("상수n을 입력: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("만족하는 k가 존재하지 않음\n");
        return (1);
    }
    
    while (1)
    {
        if (PowToTwo(k) > n)
            break;
        k++;
    }
    printf("공식을 만족하는 k의 최댓값은 %d\n", k - 1);
    return 0;
}