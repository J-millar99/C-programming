#include <stdio.h>

int main(void)
{   
    int i, j, cnt=0, ea=0;

    for(i=1; i<100; i++)
    {
        for(j=1; j<=i; j++)
        {
            if (i%j==0)
            {
                cnt++;
            }
        }
        if (cnt==2)
        {
            printf("%d ", i);
            ea+=1;
        }
        if (ea==10)
            break;
        cnt=0;

    }
    return 0;
}