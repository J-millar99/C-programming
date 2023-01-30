#include <stdio.h>

int main(void)
{   
    int num1, num2, i, cf;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    for(i=1; i<=num1; i++)
        if(num1 % i == 0 && num2 % i == 0)
            cf = i;
    printf("두 수의 최대 공약수: %d\n", cf);
    return 0;
}