#include <stdio.h>

void get_Binary (int n);

int main(void)
{
    int n, result;
    printf("Please enter a number: ");
    scanf("%d", &n);
    

    get_Binary(n);
    return 0;
}

void get_Binary (int n)
{
    if ( n <= 1)
        printf("%d", n);
    else 
    {
        get_Binary(n/2);
        printf("%d", n%2);
    }
}