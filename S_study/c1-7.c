#include <stdio.h>

int main(void)
{   
    int n, k;
    int inc=1;
    printf("상수 n을 입력: ");
    scanf("%d", &n);

    if(n==0)
    {
        printf("만족하는 k값이 존재하지 않습니다. ");
        return 0;
    }
    for(k=0; inc*2<=n; k++)
        inc = inc * 2;
    printf("최대값k = %d \n", k);
    return 0;
}