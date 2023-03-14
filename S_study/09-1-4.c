#include <stdio.h>

void fibonachi(int n)
{
    int f1 = 0, f2 = 1;
    int f3;

    if (n == 1)
        printf("%d",f1);
    else if (n == 2)
        printf("%d, %d",f1,f2);
    else
    {
        printf("%d, ",f1);
        while (n > 2)
        {
            printf("%d, ",f2);
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            n--;
        }
        printf("%d",f3);
    }
}

int main(void)
{
    int n;
    
    printf("정수 하나를 입력: ");
    scanf("%d", &n);
    fibonachi(n);
    printf("\n");
    return 0;
}