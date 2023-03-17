#include <stdio.h>

#define MAX(A, B)   ((A > B) ? A : B)
int main(void)
{
    double a, b;

    printf("두 값을 입력: ");
    scanf("%lf %lf", &a, &b);
    printf("두 값중 큰 값: %f", MAX(a, b));
    return 0;
}