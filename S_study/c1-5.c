#include <stdio.h>

int isPrime(int n)
{
    int cnt=0, i;
    for(i=1; i<=n; i++)
    {
        if (n%i==0)
            cnt+=1;
    }
    if (cnt==2)
        return 1;
    
}
int main(void)
{   
    int exa=0,i=1;
    while(exa!=10)
    {
        if(isPrime(i)==1)
        {
            printf("%d ", i);
            exa ++;
        }
        i++;
    }
    return 0;
}