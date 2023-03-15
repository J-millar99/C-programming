#include <stdio.h>

int main(void)
{
    int arr[10];
    int num;
    int j = 9;
    int k = 0;

    printf("총 10개의 숫자 입력\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d번째 수를 입력: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            arr[j] = num;
            j--;
        }
        else
        {
            arr[k] = num;
            k++;
        }
        
    }

    printf("배열 요소의 출력 : ");
    for (j = 0; j < 10; j++)
        printf("%d ", arr[j]);
    return 0;
}