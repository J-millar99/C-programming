#include <stdio.h>

int main(void)
{
    int num = 5;

    while (num <= 18)
    {
        printf("10진수: %d, 8진수: %o\n", num, num);
        num++;
    }
    return 0;

}