#include <stdio.h>

int main(void)
{
    int num, i=0;
    printf("배수의 개수: ");
    scanf("%d", &num);
    while (i++ < num)
        printf("%d ",3 * i);
    printf("\n");
    return 0;
}