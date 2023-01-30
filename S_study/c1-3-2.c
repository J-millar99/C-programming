#include <stdio.h>

int main(void)
{   
    int num1, num2, i, cf;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    while(i!=0)
    {
        if (num1 < num2)
        {
            i = num2 % num1;
            num2 = num1;
            num1 = i;
            cf = num2;
        }
        
        else
        {
            i = num1 % num2;
            num1 = num2;
            num2 = i;
            cf = num1;
        }
    }
    printf("최대 공약수: %d \n", cf);
    return 0;
}