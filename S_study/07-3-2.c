#include <stdio.h>

int main(void)
{
    int num = 0, sum = 0;
    do
    {
        sum += num;
        num +=2;
    } while (num <= 100);
    printf("합계: %d \n", sum);
    return 0;
}