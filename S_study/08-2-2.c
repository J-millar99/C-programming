#include <stdio.h>

int main(void)
{
    int A = 0, Z = 0;

    while (A < 10)
    {
        Z = 0;
        while (Z < 10)
        {
            if ((10 * A + Z) + (Z * 10 + A) == 99)
                printf("A: %d, Z: %d\n", A, Z);
            Z++;
        }
        A++;
    }
    return 0;
}