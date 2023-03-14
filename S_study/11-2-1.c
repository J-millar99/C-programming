#include <stdio.h>

int main(void)
{
    char word[100];
    int len = 0, idx = 0;

    printf("영단어를 입력: ");
    scanf("%s", word);

    while(word[idx] != 0)
    {
        len += 1;
        idx++;
    }
    printf("%d\n", len);
    return 0;
}