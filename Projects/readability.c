#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//gcc -o readability readability.c cs50.c - The CS50 projects only work with this command
//Now, this program is free from the cs50 library. It can be used as a normal c program without the cs50 library.

int count_words(char s[]);
int count_sentence(char s[]);
int count_letters(char s[]);
float evaluate(char s[]);

int main(void)
{
    printf("Text: ");
    char s[1000];
    
    gets(s);

    int index = (int) round(evaluate (s));

    if (index < 1)
    {
        printf("Below grade 1");
    }
    else if (index >= 16)
    {
        printf("Grade 16+");
    }
    else 
    {
        printf("Grade %d", index);
    }
    printf("\n");
    return 0;
}

int count_words (char s[])
{
    int nw = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ')
            nw++;
    }
    
    return nw+1;
}

int count_sentence (char s[])
{
    int ns = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '.'|| s[i] =='!'|| s[i] == '?')
            ns++;
    }
    return ns;     
}

int count_letter (char s[] )
{
    int nl = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (isalpha(s[i]))
        {
            nl++;
        }
    }
    return nl;
}

float evaluate (char s[])
{
    int nl = count_letter (s);
    int nw = count_words (s);
    int ns = count_sentence (s);

    float L = nl / nw * 100;
    float S = ns / nw * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;
    
    return index;
}
