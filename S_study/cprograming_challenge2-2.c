#include <stdio.h>

void binaryRecursive(int num)
{
    if (num > 1)
        binaryRecursive(num/2);
    printf("%d", num % 2);
}

int main(void)
{
    int num;

    printf("2진수로 표현할 10진수 정수 입력: ");
    scanf("%d", &num);

    binaryRecursive(num);
    return 0;
}