#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
}   Point;

typedef struct rectangle
{
    Point leftupperPos;
    Point rightlowerPos;
}   Rectangle;

void showRectanglepos(Rectangle rectangle)
{
    printf("좌 상단: %d, %d\n", rectangle.leftupperPos.xpos, rectangle.leftupperPos.ypos);
    printf("좌 하단: %d, %d\n", rectangle.leftupperPos.xpos, rectangle.rightlowerPos.ypos);
    printf("우 상단: %d, %d\n", rectangle.rightlowerPos.xpos, rectangle.leftupperPos.ypos);
    printf("우 하단: %d, %d\n", rectangle.rightlowerPos.xpos,rectangle.rightlowerPos.ypos);
}

void getRectanglearea(Rectangle rectangle)
{
    int area;

    area = ((rectangle.rightlowerPos.xpos - rectangle.leftupperPos.xpos) *\
     (rectangle.leftupperPos.ypos - rectangle.rightlowerPos.ypos));

    printf("%d", area);
}

int main(void)
{
    Rectangle rect;
    printf("좌 상단의 좌료를 입력: ");
    scanf("%d %d", &rect.leftupperPos.xpos, &rect.leftupperPos.ypos);
    printf("우 하단의 좌표를 입력: ");
    scanf("%d %d", &rect.rightlowerPos.xpos, &rect.rightlowerPos.ypos);

    printf("\n직사각형의 모든 좌표\n");
    showRectanglepos(rect);

    printf("\n직사각형의 넓이: ");
    getRectanglearea(rect);
    puts("");
    return 0;
}