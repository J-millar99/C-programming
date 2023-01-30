#include <stdio.h>

double CelToFah(double temp);
double FahToCel(double temp);

int main(void)
{   
    double temp;
    char opt;
    printf("����(C) Ȥ�� ȭ��(F)�� ����: ");
    scanf("%c", &opt);
    printf("�µ��� �Է�: ");
    scanf("%lf", &temp);

    if(opt=='C' || opt=='c')
        goto CELTOFAH;
    else if (opt=='F' || opt=='f')
        goto FAHTOCEL;
    
CELTOFAH:
    printf("������ ȭ����: %f\n", CelToFah(temp));
    goto END;

FAHTOCEL:
    printf("ȭ���� ������: %f\n", FahToCel(temp));
    goto END;
END:
    return 0;
}

double CelToFah(double temp)
{
    temp = 1.8 * temp + 32;
    return temp;
}

double FahToCel(double temp)
{
    temp = (temp - 32) / 1.8;
    return temp;
}