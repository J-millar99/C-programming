#include <stdio.h>

int main(void)
{
    int num=0, i=1, sum=0;
    while(i <= 5)
    {
        while(num <= 0)
        {
            printf("정수 하나를 입력 %d번째 : ", i);
            scanf("%d", &num);
        }
        sum += num;
        i++;
        num = 0;
    }
    printf("총 합: %d \n", sum);
    return 0;
}