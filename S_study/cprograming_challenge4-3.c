#include <stdio.h>

typedef struct fnum
{
    double f1, f2;
}   Fnum;

void showComplexNumOp(Fnum fnum1, Fnum fnum2)
{
    double fnum, hnum;
    printf("���� ���] �Ǽ�: %f, ���: %f\n", fnum1.f1 + fnum2.f1, fnum1.f2, fnum2.f2);
    fnum = fnum1.f1 * fnum2.f1 - fnum1.f2 * fnum2.f2;
    hnum = fnum1.f2 * fnum2.f1 + fnum1.f1 * fnum2.f2;
    printf("���� ���] �Ǽ�: %f, ���: %f\n", fnum, hnum);
}
int main(void)
{
    Fnum f1struct, f2struct;
    printf("���Ҽ� �Է�1[�Ǽ� ���]: ");
    scanf("%lf %lf", &f1struct.f1, &f1struct.f2);
    printf("���Ҽ� �Է�2[�Ǽ� ���]: ");
    scanf("%lf %lf", &f2struct.f1, &f2struct.f2);
    showComplexNumOp(f1struct, f2struct);
    return 0;
}