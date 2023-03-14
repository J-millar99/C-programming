#include <stdio.h>

double CelToFah(int temp)
{
    double Fah;

    Fah = 1.8 * temp + 32;

    return Fah;
}

double FahToCel(int temp)
{
    double Cel;

    Cel = (temp - 32) / 1.8;

    return Cel;
}

int main(void)
{
    int opt;
    double temp;

    printf("섭씨온도: 1, 화씨온도: 2\n선택: ");
    scanf("%d", &opt);
    printf("온도를 입력: ");
    scanf("%lf", &temp);

    if (opt == 1)
        goto CEL;
    else if (opt == 2)
        goto FAH;
    else
        goto END;
CEL:
    printf("%f",CelToFah(temp));
    goto END;
FAH:
    printf("%f",FahToCel(temp));
    goto END;
END:
    return 0;
}