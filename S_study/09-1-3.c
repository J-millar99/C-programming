#include <stdio.h>

void fibonachi(int n);

int main(void)
{   
    int num;
    printf("������ ������ �Է�: ");
    scanf("%d", &num);
    fibonachi(num);
    return 0;
}

void fibonachi(int n)
{
    int f1=0, f2=1, f3;
    if (n==1)
        printf("%d", f1);
    else
        printf("%d, %d", f1, f2);
    for(int i=0; i<n-2; i++)
    {
        f3 = f1 + f2;
        printf(", %d", f3);
        f1 = f2;
        f2 = f3;
    }
    printf("\n");
}