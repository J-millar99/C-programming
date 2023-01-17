#include <stdio.h>

int main(void)
{
    int n1, n2, sum=0;


    printf("for문 풀이 \n");

    printf("두 개의 정수를 입력: ");
    scanf("%d %d", &n1, &n2);
    for (;n1 <= n2;n1++)
    {
        sum += n1;
    }
    printf("%d \n",sum);



    printf("while문 풀이 \n");
    sum = 0;
    printf("두 개의 정수를 입력: ");
    scanf("%d %d", &n1, &n2);
    while(n1<=n2)
    {
        sum += n1;
        n1++;
    }
    printf("%d \n",sum);






    printf("do - while문 풀이 \n");
    sum = 0;
    printf("두 개의 정수를 입력: ");
    scanf("%d %d", &n1, &n2);
    do
    {
        sum += n1;
        n1++;
    } while (n1 <= n2);
    printf("%d \n", sum);
    
    return 0;
}