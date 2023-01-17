#include <stdio.h>

int main(void)
{
    int num;
    printf("양의 정수 하나를 입력: ");
    scanf("%d", &num);
    while (num > 0)
    {
        printf("Hello world! \n");
        num--;
    }
    return 0;
}