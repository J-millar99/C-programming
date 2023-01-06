#include <stdio.h>
#include <string.h>

typedef struct cityinfo
{
    char name[50];
    char country[50];
    char population[50];
} Cityinfo;


int main(void)
{
    Cityinfo arr[3];
    int i;
    printf("Input three cities: \n");
    for(i=0; i<3; i++)
    {
    printf("Name> ");
    fgets(arr[i].name, sizeof(arr[i].name), stdin);

    
    printf("Country> ");
    fgets(arr[i].country, sizeof(arr[i].country), stdin);
    
    printf("Population> ");
    fgets(arr[i].population, sizeof(arr[i].population), stdin);
    }
    for(i=0; i<3; i++)
    {
        arr[i].name[strlen(arr[i].name)-1] = 0;
        arr[i].country[strlen(arr[i].country)-1] = 0;
        arr[i].population[strlen(arr[i].population)-1] = 0;
    }

    printf("Printing the three cities: \n");
    for(i=0; i<3; i++)
        printf("%d. %s in %s with a population of %s people \n", i+1, arr[i].name, arr[i].country, arr[i].population);
    
}