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

    puts("���� ���� �Է�");
    for (int i = 0; i<3; i++)
    {
        printf("����: ");
        fgets(lib[i].writer, sizeof(lib[i].writer), stdin);
        lib[i].writer[strlen(lib[i].writer) - 1] = 0;
        printf("����: ");
        fgets(lib[i].title, sizeof(lib[i].title), stdin);
        printf("������ ��: ");
        lib[i].title[strlen(lib[i].title) - 1] = 0;
        scanf("%d", &lib[i].page);
        getchar();
    }
    puts("���� ���� ���");
    for (int j = 0; j<3; j++)
    {
        printf("book %d\n", j+1);
        printf("����: %s\n", lib[j].writer);
        printf("����: %s\n", lib[j].title);
        printf("������ ��: %d\n", lib[j].page);
    }
    return 0;
}