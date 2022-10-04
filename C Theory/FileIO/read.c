#include <stdio.h>

int main(int argc, char* argv[]) //The char* makes argv a string array instead of a character array.
{
    FILE* ptr; // To do operations with file, we have to make a file pointer this way.

    ptr = fopen("myfile.txt", "r");  //This function opens a file in the file pointer. In the syntax, 
    //the first argument is the name of the file, and the second is the mode in which it is to be 
    //opened. "r", is the read mode. This is the mode in which we would be able to look at the content of the file.

    char str[100]; //This is the variable that would store the data that would come from reading the file. We can use it to show the data on the console.
    
    //fscanf(ptr, "%s", string); The fscanf function take three arguments:
    // First is the file pointer, second is the format specifier of the variable that would hold the file contents and third is the variable itself. 

    fgets(str, 100, ptr);
    //The fscanf function does not take characters which are after the whitespace, but fgets does. It just needs to know how many characters to read. If both are used at the same time, the string would split between them in such a way that first word would be present in fscanf and the rest would be present in fgets.

    printf("From the fscanf function: %s\n", string);
    printf("From the fgets function: %s\n", str);
    
    fclose(ptr);
    return 0;
}