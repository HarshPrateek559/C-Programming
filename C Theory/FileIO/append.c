#include <stdio.h>

int main(int argc, char* argv[]) //The char* makes argv a string array instead of a character array.
{
    FILE *ptr; 
    ptr = fopen("myfile.txt", "a"); // This file will open in append mode since "a", represent the append mode. In this mode, all the text would be appended in the existing text in the file.
    char s[100];
    printf("Enter the text that is to be added to the file:\n\t");
    gets(s);

    fprintf(ptr, "%s", s);

    fclose(ptr);
    return 0;
}