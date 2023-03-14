#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &n1, &n2);

    if (n1 < n2)
        printf("두 정수의 차: %d\n",n2 - n1);
    else
        printf("두 정수의 차: %d\n", n1 - n2);
    return 0;
}