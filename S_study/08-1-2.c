#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("두 정수가 공백을 두고 입력:");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
        printf("%d \n", num1 - num2);
    else
        printf("%d \n", num2 - num1);
    return 0;
}