#include <stdio.h>

int main(void)
{
    double n1, n2;
    printf("두 개의 실수를 입력: ");
    scanf("%lf %lf", &n1, &n2);
    printf("%.3f+%.3f=%.3f \n", n1,n2,n1+n2);
    printf("%.3f-%.3f=%.3f \n", n1,n2,n1-n2);
    printf("%.3f*%.3f=%.3f \n", n1,n2,n1*n2);
    printf("%.3f/%.3f=%.3f \n", n1,n2,n1/n2);
    return 0;
}