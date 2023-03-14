#include <stdio.h>

int main(void)
{
    int num;

    printf("10진수 정수 하나를 입력: ");
    scanf("%d", &num);

    printf("16진수: %x\n", num);
    return 0;
}