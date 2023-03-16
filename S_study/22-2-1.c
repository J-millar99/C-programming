#include <stdio.h>

struct employee
{
    char name[10];
    char popunum[15];
    int salary;
};

int main(void)
{
    struct employee person[3];

    for(int i = 0; i < 3; i++)
    {
        fputs("종업원 이름 입력: ", stdout); scanf("%s", person[i].name);
        fputs("종업원 주민등록번호 입력: ", stdout); scanf("%s", person[i].popunum);
        fputs("종업원 급여 입력: ", stdout); scanf("%d", &person[i].salary);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("이름: %s\n", person[i].name);
        printf("주민등록번호: %s\n", person[i].popunum);
        printf("급여: %d\n", person[i].salary);
    }
    return 0;
}