#include <stdio.h>

const int BREAD=500;
const int SNACK=700;
const int DRINK=400;

int main(void)
{   
    int mny;
    int i,j,k;
    printf("���� ����� �����ϰ� �ִ� �ݾ�: ");
    scanf("%d", &mny);
    for(i=1; i<mny/BREAD; i++)
        for(j=1; j<mny/SNACK; j++)
            for(k=1; k<mny/DRINK; k++)
                if(BREAD*i+SNACK*j+DRINK*k==mny)
                    printf("ũ���� %d��, ����� %d��, �ݶ� %d�� \n", i,j,k);
    printf("��� �����Ͻðڽ��ϱ�? \n");
    return 0;
}