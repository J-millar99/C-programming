#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("두 개의 정수를 입력:");
    scanf("%d %d",&n1,&n2);
    printf("%d - %d = %d\n",n1,n2,n1-n2);
    printf("%d x %d = %d\n",n1,n2,n1*n2);
    return 0;
}