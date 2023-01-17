#include <stdio.h>

int main(void)
{
    int n, i, f=1;

    printf("for문 풀이 \n");

    printf("계승할 n을 입력: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        f = f * i;
    printf("%d \n", f);

    printf("while문 풀이 \n");
    f = 1;
    i = 1;
    printf("계승할 n을 입력: ");
    scanf("%d", &n);
    while(i<=n)
    {
        f *= i;
        i++;
    }
    printf("%d \n", f);

    printf("do - while문 풀이 \n");
    f = 1;
    i = 1;
    printf("계승할 n을 입력: ");
    scanf("%d", &n);
    do
    {
        f *= i;
        i++;
    } while (i<=n);
    printf("%d \n", f);


    return 0;
}