#include <stdio.h>

int main(void)
{
    int i = 0;
    int num;
    int sum = 0;
    while (i < 51)
    {
        num = 2 * i;
        sum += num;
        ++i;
    }
    printf("%d\n",sum);
    return 0;
}