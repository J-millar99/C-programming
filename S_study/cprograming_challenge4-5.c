#include <stdio.h>

int main(void)
{
    int a=0, p=0;
    int ch1, ch2;
    FILE * fp = fopen("C:\\Users\\wlwog\\Desktop\\C-programming\\S_study\\strtext.txt", "rt");
    if (fp == NULL)
    {
        puts("���� ���� ����");
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
    printf("A�� �����ϴ� �ܾ��� ��: %d\n", a);
    printf("P�� �����ϴ� �ܾ��� ��: %d\n", p);
    fclose(fp);
    return 0;
}