#include <stdio.h>

int main(void)
{
    char word[100];
    char temp;
    int len = 0, idx = 0;

    printf("영단어를 입력: ");
    scanf("%s", word);

    while(word[idx] != 0)
    {
        len += 1;
        idx++;
    }
    for (int i = 0; i < len / 2; i++)
    {
        temp = word[i];
        word[i] = word[len-i-1];
        word[len-1-i] = temp;
    }
    printf("%s\n", word);
    return 0;
}