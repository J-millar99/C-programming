#include <stdio.h>

int main(void)
{
    int A, Z;
    for(A=0; A<10; A++)
        for(Z=0; Z<10; Z++)
            if ((A*10 + Z) + (Z*10 + A) == 99)
                printf("A=%d, Z=%d \n", A, Z);
            else
                continue;
    return 0;
}