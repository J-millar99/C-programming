#include <stdio.h>

int main(void)
{
    char str[100];
    //int ch;

    FILE * fp = fopen("mystory.txt", "rt");
    if (fp == NULL)
    {
        puts("파일오픈 실패!");
        return -1;
    }

    //while ((ch=fgetc(fp))!=EOF)
    //  fputc(ch,stdout);

    while (fgets(str, sizeof(str), fp) != NULL)
        fputs(str, stdout);
        //printf(str);

    if(feof(fp) != 0)
        puts("파일을 전부 출력!");
    else
        puts("파일 출력 실패");
    fclose(fp);
    return 0;
}