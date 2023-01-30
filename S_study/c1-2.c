#include <stdio.h>

void showGugudan(int n1, int n2)
{
    int i;
    while(n1 <= n2)
    {
        for(i=1; i<10; i++)
            printf("%dx%d=%d \n", n1, i, n1*i);
        n1++;
    }
}   

int main(void)
{   
    int n1, n2;
    printf("두 개의 정수를 입력: ");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2)
        showGugudan(n2, n1);
    else
        showGugudan(n1, n2);
    return 0;
}