#include <stdio.h>

int main(void)
{
    int n, i, j, k = 1;

    printf("숫자를 입력하시오 : ");
    scanf("%d", &n);

    int arr[n][n];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            arr[i][j] = 0;

    i = 0; j = 0;
    while (k < n*n)
    {
        while (j+i <= n-1)
        {
            if (arr[i][j] == 0)
                arr[i][j++] = k++;
        }
        i++;
        j--;
        while (j >= i)
        {
            if (arr[i][j] == 0)
                arr[i++][j] = k++;
            
        }
        i--;
        j--;
        while (j+i >= n-1)
        {
            if (arr[i][j] == 0)
                arr[i][j--] = k++;
        }
        i--;
        j++;
        while (j != i)
        {
            if (arr[i][j] == 0)
                arr[i--][j] = k++;
        }
        i++;
        j++;
    }
    if (n % 2 != 0)
        arr[i][j] = k;
    i = 0; j = 0;
    for (i = 0; i<n; i++)
    {
        for(j=0;j<n; j++)
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}