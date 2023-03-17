#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point * pos1, Point * pos2)
{
    Point pos;
    pos = *pos1;
    *pos1 = *pos2;
    *pos2 = pos;                                                                                                 
}

int main(void)
{
    Point pos1 = {2,4};
    Point pos2 = {5,7};

    puts("변경 전");
    printf("pos1.xpos: %d, pos1.ypos: %d\n", pos1.xpos,pos1.ypos);
    printf("pos2.xpos: %d, pos2.ypos: %d\n", pos2.xpos,pos2.ypos);

    SwapPoint(&pos1, &pos2);

    puts("변경 후");
    printf("pos1.xpos: %d, pos1.ypos: %d\n", pos1.xpos,pos1.ypos);
    printf("pos2.xpos: %d, pos2.ypos: %d\n", pos2.xpos,pos2.ypos);
    return 0;
}