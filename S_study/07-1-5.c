#include <stdio.h>

int main(void)
{
    int i, num;
    int sum = 0;
    double j;

    printf("몇 개의 정수를 입력?: ");
    scanf("%d", &i);

    j = i;
    while (i != 0)
    {
        scanf("%d", &num);
        sum += num;
        --i;
    }
    printf("평균 값: %f", sum / j);
    return 0;
}