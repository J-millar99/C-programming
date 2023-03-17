#include <stdio.h>

int main(void)
{
    FILE * fp = fopen("mystory.txt", "wt");
    if (fp == NULL)
    {
        printf("파일오픈 실패!");
        return -1;
    }
    fputs("#이름: 지재현\n", fp);
    fputs("#주민번호: 991216-1xxxxxx\n", fp);
    fputs("#전화번호: 010-1111-2222\n", fp);
    fclose(fp);
    return 0;
}