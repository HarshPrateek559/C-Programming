#include <stdio.h>
#include <string.h>

/*
This is a HTML parser, it takes HTML code and extract the innertext from it.
Although, this version can only extract text from a single line of HTML code.
*/

void parser(char s[]);

int main(int argc, char *argv[]) // The char* makes argv a string array instead of a character array.
{
    char s[1000];
    printf("Enter the HTML file: ");
    gets(s);

    parser(s);
    return 0;
}

void parser(char c[])
{
    int n = strlen(c);
    int start = 0; //This variable would find the first index in the string after the tags.
    int end = 0; //This variable would find the last index of the string before the tags.

    for (int i = 0; i < n; i++) 
    {
        if (c[i] == '>')
        {
            start = i + 1; //since i is at the end of the tag, it has to move one step forward to get in the innertext of the HTML.
            break;
        }
    }

    while (c[start] == ' ')
    {
        // This loop removes the spaces before the text.
        start++;
    }

    for (int i = start; i < n; i++)
    {
        if (c[i] == '<')
        {
            end = i;
            break;
        }
    }

    for (int i = start; i < end; i++)
    {
        // This loop runs from the first and character of the innertext to the last character, leaving the tags and the spaces of the original string.
        printf("%c", c[i]);
    }
    printf("\n");
}

// <h1>    Hello, world</h1>