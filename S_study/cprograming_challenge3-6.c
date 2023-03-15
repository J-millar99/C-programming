#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int f1, f2, f3;
    int n1, n2, n3;
    int s=0, b=0;

    srand((int)time(NULL));
    while(1)
    {
        f1 = (rand() % 9) + 1;
        f2 = (rand() % 9) + 1;
        if (f1 == f2)
            continue;
        f3 = (rand() % 9) + 1;
        if (f1 == f3 || f2 == f3)
            continue;
        break;
    }

    printf("Game Start! \n");
    int i = 0;
    while(s != 3)
    {
        s = 0; b = 0;
        printf("3개의 숫자 선택: ");
        scanf("%d %d %d", &n1, &n2, &n3);
        if (n1 == f1)
            s++;
        else if (n1 == f2 || n1 == f3)
            b++;
        if (n2 == f2)
            s++;
        else if (n2 == f1 || n2 == f3)
            b++;
        if (n3 == f3)
            s++;
        else if (n3 == f1 || n3 == f2)
            b++;
        printf("%d번째 도전 결과: %dstrike, %dball!!\n",i,s,b);
    }
    printf("\nGame Over!\n");
    return 0;
}