#include <stdio.h>
#include <string.h>

typedef struct bookInfo
{
    char writer[20];
    char title[30];
    int page;
}   BookInfo;


int main(void)
{
    BookInfo lib[3];

    puts("도서 정보 입력");
    for (int i = 0; i<3; i++)
    {
        printf("저자: ");
        fgets(lib[i].writer, sizeof(lib[i].writer), stdin);
        lib[i].writer[strlen(lib[i].writer) - 1] = 0;
        printf("제목: ");
        fgets(lib[i].title, sizeof(lib[i].title), stdin);
        printf("페이지 수: ");
        lib[i].title[strlen(lib[i].title) - 1] = 0;
        scanf("%d", &lib[i].page);
        getchar();
    }
    puts("도서 정보 출력");
    for (int j = 0; j<3; j++)
    {
        printf("book %d\n", j+1);
        printf("저자: %s\n", lib[j].writer);
        printf("제목: %s\n", lib[j].title);
        printf("페이지 수: %d\n", lib[j].page);
    }
    return 0;
}