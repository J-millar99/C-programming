#include <stdio.h>

void arr_rotate90(int (*arr)[4])
{
    int darr[4][4];
    int i, j;

    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            darr[j][3-i] = arr[i][j];

    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            arr[i][j] = darr[i][j];
}

int main(void)
{
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int i, j;
    for (int k = 0; k < 4; k++)
    {
        for(i=0; i<4; i++)
        {
            for(j=0; j<4; j++)
                printf("%2d ", arr[i][j]);
            printf("\n");
        }
        printf("\n");
        arr_rotate90(arr);
    }
    printf("\n");
    return 0;   
}