#include <stdio.h>

int main(void)
{
    int n1, n2;
    int sum = 0;

    printf("============for============\n");
    printf("두 개의 정수를 입력: ");
    scanf("%d %d", &n1, &n2);
    for (;n1 <= n2; n1++)
        sum += n1;
    printf("합: %d \n", sum);
    
    sum = 0;

    printf("===========while===========\n");
    printf("두 개의 정수를 입력: ");
    scanf("%d %d", &n1, &n2);
    while (n1 <= n2)
    {
        sum += n1;
        ++n1;
    }
    printf("합: %d \n", sum);

    sum = 0;

    printf("==========do-while=========\n");
    printf("두 개의 정수를 입력: ");
    scanf("%d %d", &n1, &n2);
    do
    {
        sum += n1;
        ++n1;
    } while (n1 <= n2);
    printf("합: %d \n", sum);

    return 0;
}