#include <stdio.h>

int numPow(int num)
{
    if (num==0)
        return 1;
    else
        return 2 * numPow(num-1);
}
int main(void)
{   
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);
    printf("2의 %d승은 %d \n", num, numPow(num));
    return 0;
}