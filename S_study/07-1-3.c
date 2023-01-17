#include <stdio.h>

int main(void)
{
    int num, sum=0;
    while(num!=0)
    {
        printf("더할 정수를 입력: ");
        scanf("%d", &num);
        sum += num;
    }
    printf("합: %d \n", sum);
    return 0;
}