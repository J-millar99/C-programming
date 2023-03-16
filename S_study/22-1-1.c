#include <stdio.h>

struct employee
{
    char name[10];
    char popunum[15];
    int salary;
};

int main(void)
{
    struct employee person;
    fputs("종업원 이름 입력: ", stdout); scanf("%s", person.name);
    fputs("종업원 주민등록번호 입력: ", stdout); scanf("%s", person.popunum);
    fputs("종업원 급여 입력: ", stdout); scanf("%d", &person.salary);

    printf("이름: %s\n", person.name);
    printf("주민등록번호: %s\n", person.popunum);
    printf("급여: %d\n", person.salary);
    return 0;
}