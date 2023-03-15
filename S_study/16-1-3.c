#include <stdio.h>

int main(void)
{
    int scr[5][5];
    int i, j;

    //배열을 0으로 초기화
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            scr[i][j] = 0;
    //배열을 입력 받음
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            scanf("%d", &scr[i][j]);
    //배열의 가로줄 합산
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)     
            scr[i][4] += scr[i][j];
    //배열의 세로줄 합산
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)     
            scr[4][i] += scr[j][i];
    //배열의 [4][4]마지막 인덱스의 요소를 합산
    for (int k = 0; k < 4; k++)
        scr[4][4] += scr[k][4];
    //배열 출력
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
            printf("%2d ", scr[i][j]);
        printf("\n");
    }
    return 0;
}