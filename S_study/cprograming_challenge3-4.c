#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    srand((int)time(NULL));
    for(i = 1; i < 3; i++)
        printf("주사의 %d의 결과: %d \n",i, (rand()%6)+1);
    return 0;
}