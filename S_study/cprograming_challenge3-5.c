#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int hand, shand;
    int win = 0, drew = 0, lose = 0;

    while(lose == 0)
    {
        printf("바위는 1, 가위는 2, 보자기는 3: ");
        scanf("%d", &hand);

        if (hand == 1)
            printf("당신은 바위 선택, ");
        else if (hand == 2)
            printf("당신은 가위 선택, ");
        else
            printf("당신은 보자기 선택, ");

        srand((int)time(NULL));
        shand = (rand() % 3) + 1;

        if (shand == 1)
            printf("상대는 바위 선택, ");
        else if (shand == 2)
            printf("상대는 가위 선택, ");
        else
            printf("상대는 보자기 선택, ");
        if (hand == shand)
        {
            drew++;
            printf("비겼습니다!\n");
        }
        else if ((hand == 1 && shand == 3) || (hand == 2 && shand == 1) || (hand == 3 && shand == 2))
        {
            lose++;
            printf("당신이 졌습니다!\n");
        }
        else if ((hand == 3 && shand == 1) || (hand == 1 && shand == 2) || (hand == 2 && shand == 3))
        {
            win++;
            printf("당신이 이겼습니다!\n");
        }
    }
    printf("\n게임의 결과 %d승 %d무\n", win, drew);
    return 0;
}