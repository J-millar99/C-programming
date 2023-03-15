#include <stdio.h>

int main(void)
{
    int arr[3][9];
    int o = 0, k = 0;

    for (int i = 2; i < 5; i++)
    {
        k = 0;
        for (int j = 1; j < 10; j++)
        {
            arr[o][k] = i*j;
            k++;
        }
        o++;
    }

    for (o = 0; o < 3; o++)
    {
        for (k = 0; k < 9; k++)
            printf("%2d ", arr[o][k]);
        printf("\n");
    }
    return 0;
}