#include <stdio.h>

int convCase(char* str)
{
    const int diff = 'a' - 'A';
    for(int i=0; i<sizeof(str) / sizeof(char); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            return str[i] + diff;
        else if ( str[i] >= 'a' && str[i] <= 'z')
            return str[i]- diff;
        else
            return -1;
    }
}


int main(void)
{
    char str[50];
    printf("Input> ");
    gets(str);
    printf("\n");
    convCase(str);
    printf("output> ");
    puts(str);

    return 0;
}