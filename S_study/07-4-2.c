#include <stdio.h>

int main(void)
{
    int n, i, f=1;

    printf("for�� Ǯ�� \n");

    printf("����� n�� �Է�: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        f = f * i;
    printf("%d \n", f);

    printf("while�� Ǯ�� \n");
    f = 1;
    i = 1;
    printf("����� n�� �Է�: ");
    scanf("%d", &n);
    while(i<=n)
    {
        f *= i;
        i++;
    }
    printf("%d \n", f);

    printf("do - while�� Ǯ�� \n");
    f = 1;
    i = 1;
    printf("����� n�� �Է�: ");
    scanf("%d", &n);
    do
    {
        f *= i;
        i++;
    } while (i<=n);
    printf("%d \n", f);


    return 0;
}