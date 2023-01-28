#include <stdio.h>

int main(void)
{
    int num1, num2, subtract;
    printf("두 정수가 공백을 두고 입력:");
    scanf("%d %d", &num1, &num2);
    subtract = num1 > num2 ? num1-num2 : num2 - num1;
    printf("%d \n", subtract);

}