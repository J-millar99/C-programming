#include <stdio.h>

int main(void)
{
    int num;
    int i = 9;

    printf("정수 하나를 입력: ");
    scanf("%d", &num);

    while (i != 0)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i--;
    }
    return 0;
}