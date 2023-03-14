#include <stdio.h>

int main(void)
{
    int n;

    printf("제곱할 정수 하나를 입력: ");
    scanf("%d", &n);
    printf("%d x %d = %d\n",n,n,n*n);
    return 0;
}