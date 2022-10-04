#include <stdio.h>

int main(int argc, char *argv[]) // The char* makes argv a string array instead of a character array.
{
    FILE *ptr;

    ptr = fopen("myfile.txt", "w"); // This function opens a file in the file pointer. In the syntax,
    // the first argument is the name of the file, and the second is the mode in which it is to be
    // opened. "w", is the write mode. This is the mode in which we would be able delete the previous content of the file and add new content to it.

    // The write mode can also create new file of the name given in file opening if none present.

    char s[120];

    printf("Write something to add to the text file:\n\t");

    // scanf("\t%s", s); //Due to this line, I was only able to take strings without spaces
    gets(s);

    fprintf(ptr, "%s", s);

    fclose(ptr);
    return 0;
}