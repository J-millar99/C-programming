#include <stdio.h>

#define ADDTHREE(A, B, C)    A+B+C
#define MULTITHREE(A, B, C) ((A) * (B) * (C))

int main(void)
{
    int n1, n2, n3;
    printf("3개의 정수를 입력: ");
    scanf("%d %d %d", &n1, &n2 ,&n3);
    printf("합: %d, 곱: %d\n", ADDTHREE(n1, n2, n3), MULTITHREE(n1, n2, n3));
    return 0;
}