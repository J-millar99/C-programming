#include <stdio.h>

#define PI  3.14
#define AREA(R) (((R) * (R)) * (PI))
int main(void)
{
    double r;

    printf("원의 반지름의 길이를 입력: ");
    scanf("%lf", &r);
    printf("원의 넓이: %.2f\n", AREA(r));
    return 0;
}