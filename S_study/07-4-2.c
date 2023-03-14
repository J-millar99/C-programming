#include <stdio.h>

int main(void)
{
    int n;

    printf("양의 정수 하나를 입력: ");
    scanf("%d", &n);

    for (int i = n; i > 1; i--)
        n *= i-1;
    printf("n!: %d\n", n);
    return 0;
}