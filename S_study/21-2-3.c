#include <stdio.h>
#include <string.h>

void removeBSN(char str[])
{
    int len = strlen(str);
    str[len - 1] = 0;
}

int getAge(char str[])
{
    int age = 0;

    while(*str)
    {
        if (*str >= '0' && *str <= '9')
        {
            age *= 10;  
            age += (*str - '0');
        }
        str++;
    }
    return age;
}
int ft_strlen(char str[])
{
    int len=0;

    while (*str != ' ')
    {
        len++;
        str++;
    }
    return len;
}

int main(void)
{
    char name1[30], name2[30];
    int len1, len2;
    int age1, age2;

    fgets(name1, sizeof(name1), stdin);
    removeBSN(name1);
    fgets(name2, sizeof(name2), stdin);
    removeBSN(name2);

    age1 = getAge(name1);
    age2 = getAge(name2);
    len1 = ft_strlen(name1);
    len2 = ft_strlen(name2);

    if (!strncmp(name1, name2, len1 < len2 ? len1 : len2))
        printf("이름이 같습니다.\n");
    else
        printf("이름이 다릅니다.\n");
    if (age1 == age2)
        printf("나이가 같습니다.\n");
    else
        printf("나이가 다릅니다.\n");
    return 0;
}