#include <stdio.h>

int main(void)
{
    char word[100];
    char c;
    int len = 0, i = 0;

    printf("영단어를 입력: ");
    scanf("%s", word);

    while(word[i] != 0)
    {
        len++;
        i++;
    }

    c = word[0];
    for (i = 1; i<len; i++)
        if (c < word[i])
            c = word[i];
    printf("%c\n", c);
    return 0;
}