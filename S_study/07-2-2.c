#include <stdio.h>

int main(void)
{
    int i=1, j=1;
    while(i<=5)
    {
        while(j<i)
        {
            printf("o");
            j++;
        }
        j=0;
        printf("*\n");
        i++;
    }
    return 0;
}