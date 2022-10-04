#include <stdio.h>

int height(void); //telling the compiler that these functions would be present at the end of the program for execution. This way we can get the main function at the top of the program
int printPattern(int x);

int main(void)
{
    int h = height(); //calling a function that return a value and storing it in h.
    printPattern(h); //calling a function that doesn't return a value.
}

int height(void)
{
    int h;
    do
    {
        printf("Height: ");
        scanf("%d", &h);
    } while (h < 0 || h > 9);

    return h;
}

int printPattern(int x) 
{
    for( int i = 1; i<= x; i++) //this loop forms the rows
    {
        for(int j=i; j<x; j++) // this loop prints the whitespaces equal to the difference between the total line number and the current line number.
        {
            printf(" ");
        }
        for( int j = 1; j <= i; j++) //This loop prints the character equal to the line current line number.
        {
            printf("#");
        }
        printf("\n"); //This print statement changes the pointer location for next row.
    }
    return 0;
}