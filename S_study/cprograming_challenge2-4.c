#include <stdio.h>

int getStringLen(char *str)
{
    int idx = 0;

    while (str[idx] != 0)
        idx++;
    return idx;
}

void isPalindrome(char *str, int len)
{
    int i;
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] == str[len - 1 - i])
            continue;
        else
            break;
    }
    if (i == len / 2)
        printf("회문입니다.\n");
    else
        printf("회문이 아닙니다.\n");
}

int main(void)
{
    char word[100];
    int len;

    printf("회문인지 아닌지 검사할 영단어를 입력: ");
    scanf("%s", word);

    len = getStringLen(word);
    isPalindrome(word, len);
    return 0;
}