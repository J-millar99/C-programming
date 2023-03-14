#include <stdio.h>

int main(void)
{
    int sum = 0;
    int num;
    int i = 5;

    while (i > 0)
    {
        printf("양의 정수 하나를 입력: ");
        scanf("%d", &num);
        while (num < 1)
        {
            printf("정수는 반드시 1이상이어야 합니다.\n");
            printf("양의 정수 하나를 입력: ");
            scanf("%d", &num);
        }
        sum += num;
        --i;
    }
    printf("%d\n", sum);
    return 0;
}
