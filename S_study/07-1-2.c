#include <stdio.h>

int main(void)
{
    int num, i=0;
    printf("����� ����: ");
    scanf("%d", &num);
    while (i++ < num)
        printf("%d ",3 * i);
    printf("\n");
    return 0;
}