/*
Consider this problem as you don't need to print the pyramids but each line individually.
use the logic from the first problem and print it accordingly. After it instead of newline character, print the second pyramid. Each line would be made individually but in the output it would look like a pyramid is formed with space in between.
*/

#include "cs50.c"
#include <stdio.h>

int main(void) 
{
    
    int h;
    do //the do while loop keeps iterating till the time user does not input a value in the range of 1 to 8.
    {
    h= get_int("Height: ");
    }
    while(h<1||h>8);
    for(int i = 1; i<=h; i++) //this loop creates the row
    {
        for(int j=i; j<h; j++) // this loop prints the spaces for the first pyramid
        // The loop prints the number of spaces as the difference between the total and the current line.
        {
            printf(" ");
        }
        
        for(int j=1; j<=i;j++) //this loop prints the hashes equal in number to the current line number.
        {
            printf("#");
        }
        
        printf("  "); // This line prints the space in between the two pyramids
        
        for(int j=1; j<=i; j++) // This loop prints the second hashes for the second pyramid equal in number to the current line number
        {
            printf("#");
        }
        
        printf("\n"); // This line prints the next line character for the next row to start
    }
}