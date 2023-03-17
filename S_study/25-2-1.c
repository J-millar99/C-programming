#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *makestr(int * wordcnt)
{
    int maxlen, idx = 0;
    char * str;

    printf("문자열의 길이를 입력: ");
    scanf("%d", &maxlen);
    getchar();
    str = (char *)malloc(sizeof(char) * (maxlen+2)); //str이 배열이 아님!! 할당된 힙 메모리 영역을 가리키는 포인터일 뿐이다.
    printf("문자열을 입력: ");
    fgets(str, maxlen + 2, stdin); //maxlen + 1만큼만 읽고 maxlen + 2자리에 널 삽입
    str[strlen(str) - 1] = 0;
    while (str[idx] != 0)
    {
        if (str[idx] == 32)
            (*wordcnt)++;
        idx++;
    }
    (*wordcnt)++;
    return (str);
}

void showrevword(char str[], int wordcnt)
{
    char *rptr[wordcnt];
    int i = 1 , idx = 0;
    rptr[0] = str;
    printf("%s\n", str);
    while(i<wordcnt)
    {
        while (str[idx] != 0)
        {
            if (str[idx] == 32)
            {
                rptr[i] = &str[idx + 1];
                str[idx] = 0;
                idx++;
                break;
            }
            idx++;
        }
        i++;
    }
    while (wordcnt > 0)
    {
        printf("%s ", rptr[wordcnt - 1]);
        wordcnt--;
    }
}

int main(void)
{
    char *pstr;  //할당될 문자열을 가리키는 포인터
    int wordcnt = 0; //단어개수
    pstr = makestr(&wordcnt);
    showrevword(pstr, wordcnt);
    return 0;
}