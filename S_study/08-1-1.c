#include <stdio.h>

int main(void)
{
    int num = 1;

    while (num < 101)
    {
        if (num % 7 == 0)
            printf("%d \n",num);
        else if (num % 9 == 0)
            printf("%d \n", num);
        ++num;
    }
    return 0;
}