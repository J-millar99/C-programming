#include <stdio.h>

int main(void)
{
    int num = 8;
    int bnum;
    while (num <= 20)
    {
        printf("10진수: %d 2진수: ", num);
        for (int i = 4; i >= 0; --i)
        {
            bnum = num >> i & 1;
            printf("%d",bnum);
        }
        /*
        num을 우측으로 밀어서 1과 비트연산을 시행한다.
        해당 비트에 1이 있으면 1을 출력, 0이면 0을 출력한다.
        i = 4이므로 5자리 수로 표현되는 10진수까지 2진수로 표현할 수 있다.
        */
        printf(" 16진수: %x\n",num);
        num++;
    }
    return 0;
}