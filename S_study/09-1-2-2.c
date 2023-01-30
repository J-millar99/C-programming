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

    switch(opt)
    {
    case 'C': case 'c':
        printf("¼·¾¾¸¦ È­¾¾·Î: %f\n", CelToFah(temp));
        break;
    case 'F': case 'f':
        printf("È­¾¾¸¦ ¼·¾¾·Î: %f\n", FahToCel(temp));
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