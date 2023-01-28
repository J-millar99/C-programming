#include <stdio.h>

int main(void)
{
    int kor_scr, eng_scr, mat_scr;
    int sum;
    printf("국어, 영어, 수학 점수가 공백을 두고 입력: ");
    scanf("%d %d %d", &kor_scr,&eng_scr,&mat_scr);
    sum = (kor_scr + eng_scr + mat_scr) / 3;
    if (sum >= 90)
        printf("A \n");
    else if (sum >= 80)
        printf("B \n");
    else if (sum >= 70)
        printf("C \n");
    else if (sum >= 50)
        printf("D \n");
    else
        printf("F \n");
    return 0;
}