#include <stdio.h>

int main(void)
{
    int i = 2,j;

    while (i < 10)
    {
        j = 1;
        if (i % 2 != 0)
        {
            i++;
            continue;
        }
        
        while (j < 10)
        {
            printf("%d x %d = %d\n", i,j,i*j);
            j++;
        }
        i++;
    }
    return 0;
}