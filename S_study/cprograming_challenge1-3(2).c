#include <stdio.h>

//유클리드 호제법
int main(void)
{
    int n1, n2, temp;
    int r;

    printf("두 정수를 입력: ");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2) //n2가 항상 크도록 정렬
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    while (n2 % n1 != 0)
    {
        r = n2 % n1;
        n2 = n1;
        n1 = r;
    }
    printf("두 수의 최대공약수: %d\n", r);
    return 0;
}