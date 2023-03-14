#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("두 정수를 입력: ");
    scanf("%d %d", &n1, &n2);

    if (n1 < n2)
    {
        while (n1 <= n2)
        {
            for(int i = 1; i < 10; i++)
                printf("%d x %d = %d\n",n1,i,n1*i);
            n1++;
        }
    }
    else
    {
        while (n1 >= n2)
        {
            for(int i = 1; i < 10; i++)
                printf("%d x %d = %d\n",n2,i,n2*i);
            n2++;
        }
    }
    return 0;
}