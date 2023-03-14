#include <stdio.h>

int main(void)
{
    int x1, y1; //좌 상단
    int x2, y2; //우 하단
    int area;

    printf("좌 상단의 좌표를 입력: ");
    scanf("%d %d", &x1, &y1);
    printf("우 하단의 좌표를 입력: ");
    scanf("%d %d", &x2, &y2);

    area = (x2 - x1) * (y2 - y1);

    printf("좌 상단의 x, y 좌표: %d %d\n", x1, y1);
    printf("우 하단의 x, y 좌표: %d %d\n", x2, y2);
    printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n",area);
    return 0;
}