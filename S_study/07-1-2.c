#include <stdio.h>

int main(void)
{
    int num;
    int i = 1;

    printf("양의 정수 하나를 입력: ");
    scanf("%d", &num);

    while (num > 0)
    {
        printf("%d ", 3 * i);
        i++;
        num--;
    }
    printf("");
    return 0;
}