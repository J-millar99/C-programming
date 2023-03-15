#include <stdio.h>

void MaxAndMin(int **dptr1, int **dptr2, int *arr)
{
    int *max, *min;
    int i;

    max = min= &arr[0];
    for(i = 1; i < 5; i++)
    {
        if (*max < arr[i])
            max = &arr[i];
        if (*min > arr[i])
            min = &arr[i];
    }
    *dptr1 = max;
    *dptr2 = min;
}

int main(void)
{
    int *maxPtr;
    int *minPtr;
    int arr[5];

    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    MaxAndMin(&maxPtr, &minPtr, arr);

    printf("최댓값의 주소: %p\n최솟값의 주소: %p\n", maxPtr, minPtr);
    printf("최댓값: %d\n최솟값: %d\n", *maxPtr, *minPtr);
    return 0;
}