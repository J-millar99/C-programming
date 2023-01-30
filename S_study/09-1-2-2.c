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

    switch(opt)
    {
    case 'C': case 'c':
        printf("������ ȭ����: %f\n", CelToFah(temp));
        break;
    case 'F': case 'f':
        printf("ȭ���� ������: %f\n", FahToCel(temp));
    }
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