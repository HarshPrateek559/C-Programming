#include <stdio.h>

int main(void) {
    int h; 

    printf("Height: ");
    
    scanf("%d", &h); //This line takes input from the user.

    for ( int i = 1; i<=h; i++){ //this loop makes the rows.

        for(int j=0; j<i; j++){ //this loop makes the columns.
            printf("@");
        }
        printf("\n"); //this line prints a new line character to make a new line.
    }
    return 0; //This return statement signifies that the function does not return anything. Since the main is of int type so 0 represent null in digits.
}