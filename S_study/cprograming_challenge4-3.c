#include <stdio.h>

typedef struct fnum
{
    double f1, f2;
}   Fnum;

void showComplexNumOp(Fnum fnum1, Fnum fnum2)
{
    double fnum, hnum;
    printf("합의 결과] 실수: %f, 허수: %f\n", fnum1.f1 + fnum2.f1, fnum1.f2, fnum2.f2);
    fnum = fnum1.f1 * fnum2.f1 - fnum1.f2 * fnum2.f2;
    hnum = fnum1.f2 * fnum2.f1 + fnum1.f1 * fnum2.f2;
    printf("곱의 결과] 실수: %f, 허수: %f\n", fnum, hnum);
}
int main(void)
{
    Fnum f1struct, f2struct;
    printf("복소수 입력1[실수 허수]: ");
    scanf("%lf %lf", &f1struct.f1, &f1struct.f2);
    printf("복소수 입력2[실수 허수]: ");
    scanf("%lf %lf", &f2struct.f1, &f2struct.f2);
    showComplexNumOp(f1struct, f2struct);
    return 0;
}