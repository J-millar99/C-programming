#include <stdio.h>

int main(void)
{
    int num, input;
    int sum=0, i=0;
    printf("몇개의 수를 입력?: ");
    scanf("%d", &num);
    while(i++<num)
    {
        printf("더할 정수를 입력: ");
        scanf("%d", &input);
        sum += input;
    }
    printf("평균: %f \n", (double)sum / num);
    return 0;
}