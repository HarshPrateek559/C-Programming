#include <stdio.h>
#include <stdlib.h>

typedef struct Drivers
{
    char name[50];
    char dno[20];
    char route[100];
    int kms;
} Drivers;


int main(int argc, char* argv[]) //The char* makes argv a string array instead of a character array.
{
    int n = atoi(argv[1]);
    Drivers driver[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of driver %i\n", i);
        printf("\tName of the Driver: ");
        gets(driver[i].name);
        printf("\tDriver's License No: ");
        gets(driver[i].dno);
        printf("\tRoute Taken: ");
        gets(driver[i].route);
        printf("\tDistance Traveled in KMs: ");
        scanf("%i", &driver[i].kms);
    }

    for (int i = 0; i < n; i++)
    {
        printf("These are the details of driver %i\n", i);
        printf("\tName of the Driver: %s\n", driver[i].name);
        printf("\tDriver's License No: %s\n", driver[i].dno);
        printf("\tRoute Taken: %s\n", driver[i].route);
        printf("\tDistance Traveled in KMs: %i\n", driver[i].kms);
    }
    return 0;
}