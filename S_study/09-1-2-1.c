#include <stdio.h>

double CelToFah(double temp);
double FahToCel(double temp);

int main(void)
{   
    double temp;
    char opt;
    printf("¼·¾¾(C) È¤Àº È­¾¾(F)¸¦ ¼±ÅÃ: ");
    scanf("%c", &opt);
    printf("¿Âµµ¸¦ ÀÔ·Â: ");
    scanf("%lf", &temp);

    if(opt=='C' || opt=='c')
        goto CELTOFAH;
    else if (opt=='F' || opt=='f')
        goto FAHTOCEL;
    
CELTOFAH:
    printf("¼·¾¾¸¦ È­¾¾·Î: %f\n", CelToFah(temp));
    goto END;

FAHTOCEL:
    printf("È­¾¾¸¦ ¼·¾¾·Î: %f\n", FahToCel(temp));
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