#include <stdio.h>

int main(void)
{
    int num;
    printf("num을 입력: ");
    scanf("%d", &num);
    
    switch (num / 10)
    {
    case 0:
        printf("0이상 10미만 \n");
        break;
    case 1:
        printf("10이상 20미만 \n");
        break;
    case 2:
        printf("20이상 30미만 \n");
        break;

    default:
        printf("30이상");
    }
    return 0;
}