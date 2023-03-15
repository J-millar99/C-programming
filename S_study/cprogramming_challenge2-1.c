#include <stdio.h>

void ShowOddNumber(int arr[], int len);
void ShowEvenNumber(int arr[], int len);

int main(void)
{
    int arr[10];
    int num, len;

    len = sizeof(arr) / sizeof(int);

    printf("총 10개의 숫자 입력\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d번째 수를 입력: ", i + 1);
        scanf("%d", &num);
        arr[i] = num;
    }
    ShowOddNumber(arr, len);
    printf("\n");
    ShowEvenNumber(arr, len);
    printf("\n");
    return 0;
}

void ShowOddNumber(int arr[], int len)
{
    printf("홀수 출력: ");
    for (int i = 0; i < len; i++)
    {   
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
}

void ShowEvenNumber(int arr[], int len)
{
    printf("홀수 출력: ");
    for (int i = 0; i < len; i++)
    {   
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
}