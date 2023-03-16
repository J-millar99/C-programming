#include <stdio.h>

int main(void)
{
    int  c;

    c = getchar();
    if (c >= 'A' && c <= 'Z')
        c += 'a' - 'A';
    else if (c >= 'a' && c <= 'z')
        c -= 'a' - 'A';
    else
    {
        printf("알파벳 문자가 아닙니다.\n");
        return 1;
    }
    putchar(c);
    return 0;
}