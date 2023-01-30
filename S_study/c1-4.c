#include <stdio.h>

const int BREAD=500;
const int SNACK=700;
const int DRINK=400;

int main(void)
{   
    int mny;
    int i,j,k;
    printf("현재 당신이 소유하고 있는 금액: ");
    scanf("%d", &mny);
    for(i=1; i<mny/BREAD; i++)
        for(j=1; j<mny/SNACK; j++)
            for(k=1; k<mny/DRINK; k++)
                if(BREAD*i+SNACK*j+DRINK*k==mny)
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", i,j,k);
    printf("어떻게 구입하시겠습니까? \n");
    return 0;
}