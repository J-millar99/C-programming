#include <stdio.h>

int numPow(int num)
{
    if (num==1)
        return 2;
    else
        return 2 * numPow(num-1);
}
int main(void)
{   
    int num;
    printf("���� �Է�: ");
    scanf("%d", &num);
    printf("2�� %d���� %d \n", num, numPow(num));
    return 0;
}