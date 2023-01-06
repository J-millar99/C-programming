#include <stdio.h>

int main(void)
{
    int n=1,i=0,j=0,k=0;
    for(; n<6;n++)
    {   for(;i<=4;i++)
        {
            for(;j<1;j++)
            {
                for(;k<=4;k++)
                {
                    printf(" ");
                }
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
        j = j-2*n-1;
        k=0;
        i=0;
        k +=n;
        i +=n;
    }
    return 0;
}