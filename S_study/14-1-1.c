#include <stdio.h>

int SquareByValue(int num)
{
    return num * num;
}

int SquareByReference(int *num)
{
    return (*num) * (*num);
}

int main(void)
{
    int num;
    int npow1, npow2;

    printf("제곱할 값을 입력: ");
    scanf("%d", &num);

    npow1 = SquareByValue(num);
    npow2 = SquareByReference(&num);

    printf("Call-by-value: %d\nCall-by-reference: %d\n", npow1, npow2);
    return 0;
}