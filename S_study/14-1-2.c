#include <stdio.h>

void Swap3(int *num1, int *num2, int *num3)
{
    int temp;

    temp = *num1;
    *num1 = *num3;
    *num3 = *num2;
    *num2 = temp;
}

int main(void)
{
    int n1,n2,n3;

    printf("저장할 세 수를 입력: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Before\n");
    printf("n1: %d, n2: %d, n3: %d\n", n1, n2, n3);

    Swap3(&n1,&n2,&n3);

    printf("After\n");
    printf("n1: %d, n2: %d, n3: %d\n", n1, n2, n3);
    return 0;
}

