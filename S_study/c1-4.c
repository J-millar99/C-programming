#include <stdio.h>

int main(void)
{   
    int mny = 3500;
    int i,j,k;
    printf("���� ����� �����ϰ� �ִ� �ݾ�: %d \n", mny);
    for(i=1; i<7; i++)
        for(j=1; j<5; j++)
            for(k=1; k<8; k++)
                if(500*i + 700*j + 400*k == 3500)
                    printf("ũ���� %d��, ����� %d��, �ݶ� %d�� \n", i,j,k);
    printf("��� �����Ͻðڽ��ϱ�? \n");
    return 0;
}