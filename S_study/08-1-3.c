#include <stdio.h>

int main(void)
{
    int kor, eng, mat;
    double sum = 0;

    printf("국어, 영어, 수학 점수를 입력: ");
    scanf("%d %d %d", &kor, &eng, &mat);

    sum = (kor + eng + mat) / 3;
    if (sum >= 90)
        printf("A\n");
    else if (sum >= 80)
        printf("B\n");
    else if (sum >= 70)
        printf("C\n");
    else if (sum >= 50)
        printf("D\n");
    else
        printf("F\n");
}