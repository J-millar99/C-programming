#include <stdio.h>

int main(void)
{
    int cnt = 0, num = 1;
    int pnum, i;

    while (cnt != 10)
    {
        pnum = 0;
        i = 1;
        while (i <= num)
        {
            if (num % i == 0)
                pnum++;
            i++;
        }
        if (pnum == 2)
        {
            printf("%d ", num);
            cnt++;
        }
        num++;
    }
}