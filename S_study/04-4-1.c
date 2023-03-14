#include <stdio.h>

int main(void)
{
    int num;

    printf("정수값을 입력: ");
    scanf("%d",&num);
    printf("입력된 정수의 값: %d, 부호가 바뀐 정수의 값: %d\n", num, ~num+1);
    return 0;
}