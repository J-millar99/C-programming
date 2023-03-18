#include <stdio.h>

int main(void)
{
    int a=0, p=0;
    int ch1, ch2;
    FILE * fp = fopen("C:\\Users\\wlwog\\Desktop\\C-programming\\S_study\\strtext.txt", "rt");
    if (fp == NULL)
    {
        puts("파일 오픈 실패");
        return -1;
    }
    while (1)
    {
        ch1 = fgetc(fp);
        if (ch1 == -1)
            break ;
        ch2 = fgetc(fp);
        if (ch2 == -1)
            break ;
        if (ch1 == 32 && ch2 == 'A')
            a++;
        if (ch1 == 32 && ch2 == 'P')
            p++;
    }
    printf("A로 시작하는 단어의 수: %d\n", a);
    printf("P로 시작하는 단어의 수: %d\n", p);
    fclose(fp);
    return 0;
}