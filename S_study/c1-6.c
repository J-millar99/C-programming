#include <stdio.h>

int main(void)
{   
    int hur, min, sec;
    printf("�ʸ� �Է�: ");
    scanf("%d",&sec);
    hur = sec / 3600;
    sec %= 3600;
    min = sec / 60;
    sec %= 60;

    printf("[h:%d, m:%d, s:%d] \n",hur,min,sec);
    return 0;
}