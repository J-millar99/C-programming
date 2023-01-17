#include <stdio.h>

int main(void)
{
    int num, i=9;
    printf("양의 정수 하나를 입력: ");
    scanf("%d", &num);
    while(i>0)
    {
        printf("%2d x %2d = %2d \n", num, i, num*i);
        i--;
    }
    return 0;
}