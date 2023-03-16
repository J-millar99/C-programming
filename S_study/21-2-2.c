#include <stdio.h>
#include <string.h>

void removeBSN(char str[])
{
    int len = strlen(str);
    str[len - 1] = 0;
}

int main(void)
{
    char str1[20];
    char str2[20];
    char str3[20];

    fgets(str1, sizeof(str1), stdin);
    removeBSN(str1);
    fgets(str2, sizeof(str2), stdin);
    removeBSN(str2);

    strcpy(str3, str1);
    strcat(str3, str2);
    puts(str3);
    return 0;
}