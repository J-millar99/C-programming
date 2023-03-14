#include <stdio.h>

int main(void)
{
    int arr[5];
    int sum = 0;
    int max, min, i;

    for(i = 0; i < 5; i++)
    {
        printf("%d번째 수 입력: ",i+1);
        scanf("%d", &arr[i]);
    }


    max = arr[0];
    for(i = 1; i < 5; i++)
        if (max < arr[i])
            max = arr[i];

    min = arr[0];
    for(i = 1; i < 5; i++)
        if (min > arr[i])
            min = arr[i];
    
    for(i = 0; i < 5; i++)
        sum += arr[i];

    printf("입력된 배열에서...\n");
    printf("최댓값: %d, 최솟값: %d, 정수의 총 합: %d\n",max, min, sum);
    return 0;
}