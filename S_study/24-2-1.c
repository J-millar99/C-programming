#include <stdio.h>

long getFileByte(FILE * fp)
{
    long fpos;

    while(1)
    {
        fgetc(fp);
        if (fgetc(fp) == EOF)
            break;
    }
    fpos = ftell(fp);
    return fpos;
}

int main(void)
{
    FILE * fp = fopen("mystory.txt", "rt");
    getFileByte(fp);
    printf("������ ũ��: %ld", getFileByte(fp));
    return 0;
}