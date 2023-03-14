#include <stdio.h>

int main(void)
{
    int n1, n2;
    int i;

    printf("두 개의 정수를 입력: ");
    scanf("%d %d", &n1, &n2);

    i = n1 < n2 ? n1 : n2;
    while (1)
    {
        if (n1 % i == 0 && n2 % i == 0)
            break;
        --i;
    }
    printf("두 수의 최대 공약수: %d\n", i);
    return 0;
}