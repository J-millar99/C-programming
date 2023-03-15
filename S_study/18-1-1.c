#include <stdio.h>

int main(void)
{
    int * arr1[5];
    int * arr2[3][5];

    int **dptr = arr1;
    int *(*dptr)[5] = arr2;
}