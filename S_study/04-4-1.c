#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    num = ~num+1;
    printf("%d \n", num);
    return 0;
}