#include <stdio.h>

int main(void)
{
    int bread=1, snack=1, sodac=1;
    int money;

    printf("현재 당신이 소유하고 있는 금액 : ");
    scanf("%d", &money);

    while(500 * bread < money)
    {
        snack = 1;
        while(700 * snack < money)
        {
            sodac = 1;
            while(400 * sodac < money)
            {
                if(500 * bread + 700 * snack + 400 * sodac == money)
                {
                    printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", bread, snack, sodac);
                    break;
                }
                sodac++;
            }
            snack++;
        }
        bread++;
    }
    printf("어떻게 구입하시겠습니까?");
    return 0;
}