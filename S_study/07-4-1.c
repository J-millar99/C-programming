#include <stdio.h>

int main(void)
{
    int n1, n2, sum=0;


    printf("for�� Ǯ�� \n");

    printf("�� ���� ������ �Է�: ");
    scanf("%d %d", &n1, &n2);
    for (;n1 <= n2;n1++)
    {
        sum += n1;
    }
    printf("%d \n",sum);



    printf("while�� Ǯ�� \n");
    sum = 0;
    printf("�� ���� ������ �Է�: ");
    scanf("%d %d", &n1, &n2);
    while(n1<=n2)
    {
        sum += n1;
        n1++;
    }
    printf("%d \n",sum);






    printf("do - while�� Ǯ�� \n");
    sum = 0;
    printf("�� ���� ������ �Է�: ");
    scanf("%d %d", &n1, &n2);
    do
    {
        sum += n1;
        n1++;
    } while (n1 <= n2);
    printf("%d \n", sum);
    
    return 0;
}