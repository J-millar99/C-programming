#include <stdio.h>

int main(void)
{
    int i = 5, j;
    while (i > 0)
    {
        j = 5;
        while (j - i > 0)
        {
            printf("o ");
            j--;
        }
        i--;
        printf("*\n");
    }
}