#include <stdio.h>

int main(void)
{
    char str[100];
    int sum = 0;
    int idx = 0;

    fgets(str, sizeof(str), stdin);
    while (str[idx] != 0)
    {
        if (str[idx] >= '0' && str[idx] <= '9')
            sum += (str[idx] - '0');
        idx++;
    }
    printf("%d \n", sum);
    return 0;
}