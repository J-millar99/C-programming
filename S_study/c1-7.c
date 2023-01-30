#include <stdio.h>

int main(void)
{   
    int i=1, cnt=0, n;
    printf("���� n�� �Է�: ");
    scanf("%d", &n);
    while(1)
    {    
        i *=2;
        cnt +=1;
        if (i>=n)
        {
            printf("%d \n", cnt);
            break;
        }
    }
    return 0;
}