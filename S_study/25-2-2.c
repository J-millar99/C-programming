#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    int num, i = 0, j = 5;

    arr = (int *)malloc(sizeof(int) * 5);
    while(1)
    {
        printf("정수 하나를 입력(-1: 종료): ");
        scanf("%d", &num);
        if (num == -1)
            break;
        arr[i] = num;
        if (i == j)
        {
            j+=3;
            arr = (int *)realloc(arr, sizeof(int)*j);
        }
        i++;
    }
    for (int k = 0; k < i; k++)
        printf("%d ", arr[k]);
    free(arr);
    return 0;
}