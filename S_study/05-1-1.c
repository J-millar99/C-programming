#include <stdio.h>

int main(void)
{
    int x1, y1, x2, y2;
    printf("x1, y1의 좌표를 입력: ");
    scanf("%d %d", &x1, &y1);
    printf("x2, y2의 좌표를 입력: ");
    scanf("%d %d", &x2, &y2);
    printf("두 점이 이루는 직사각형의 넓이는 %d입니다. \n", (x2-x1) * (y2-y1));
    return 0;
}