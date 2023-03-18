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
    printf("파일의 크기: %ld", getFileByte(fp));
    return 0;
}