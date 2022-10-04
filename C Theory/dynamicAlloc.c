#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef char* string;

int main(int argc, char* argv[]) //The char* makes argv a string array instead of a character array.
{
    string s = NULL;
    s = malloc(50); // Here, malloc is allocating 50 byte of memory to s.
    printf("s: ");
    gets(s);
    string t = NULL; // It is important to initialize the variable with a NULL since in this case, t is a pointer.

    t = malloc(strlen(s) + 1); // This function allocates 4 bytes of memory to t, which is used by the strcpy function to copy the value of s to t.
    strcpy(t, s);
    t[0] = tolower(t[0]);
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    free(s);
    free(t);// This function frees the memory allocated to t by the system.
    return 0;
}