#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("두 정수를 입력: ");
    scanf("%d %d", &n1, &n2);
    printf("몫: %d\n",n1 / n2);
    printf("나머지: %d\n", n1 % n2);
    return 0;
}