#include <stdio.h>

int main(void)
{
    int num,i,cnt=0;
    printf("Please enter a number: ");
    scanf("%d", &num);

    for(i=2;i<num;i++)
    {
        if(num % i ==0)
            cnt +=1;    
    }
    if (num == 1)
        cnt = 1;

    if (cnt>0)
        printf("It is not a prime number \n");
    else
        printf("It is a prime number \n");
    return 0;
}