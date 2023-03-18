#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct bookInfo
{
    char writer[20];
    char title[30];
    int page;
}   BookInfo;

int main(void)
{
    int n;
    printf("도서 정보를 기입할 개수를 입력: ");
    scanf("%d", &n);
    getchar();
    BookInfo *lib[n];
    for (int k = 0; k < n; k++)
    {
        BookInfo *book = (BookInfo *)malloc(sizeof(BookInfo) * n);
        lib[k] = book;
    }
    puts("도서 정보 입력");
    for (int i = 0; i<n; i++)
    {
        printf("저자: ");
        fgets(lib[i]->writer, sizeof(lib[i]->writer), stdin);
        lib[i]->writer[strlen(lib[i]->writer) - 1] = 0;
        printf("제목: ");
        fgets(lib[i]->title, sizeof(lib[i]->title), stdin);
        printf("페이지 수: ");
        lib[i]->title[strlen(lib[i]->title) - 1] = 0;
        scanf("%d", &lib[i]->page);
        getchar();
    }
    puts("도서 정보 출력");
    for (int j = 0; j<n; j++)
    {
        printf("book %d\n", j+1);
        printf("저자: %s\n", lib[j]->writer);
        printf("제목: %s\n", lib[j]->title);
        printf("페이지 수: %d\n", lib[j]->page);
    }
    return 0;
}