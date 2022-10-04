#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // The char* makes argv a string array instead of a character array.
{
    int l;
    for (int i = 0; i < 3; i++)
    {
        char *ptr;
        printf("Enter the length of the employee id of %i: ", i + 1);
        scanf("%d", &l);
        ptr = (char *)malloc((l + 1) * sizeof(char));
        printf("\tEnter the Employee ID for employee %i: ", i + 1);
        scanf("%s", ptr);
        printf("\tEmployee ID: %s\n", ptr);
        free(ptr);
    }

    return 0;
}