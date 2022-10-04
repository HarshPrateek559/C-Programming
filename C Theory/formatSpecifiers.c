/*
This is the list of all the format specifiers necessary for c programming. Run it to get the complete list of important specifiers. It also has information about constants.
*/

#include <stdio.h>
#define PI 3.14 // This is one way of declaring a constant. A variable which value cannot be changed during the execution of the program.
int main(void)
{
    const int x = 34; // This is another way of declaring a constant.

    printf("List of all the format specifiers: \n \n");
    printf("%%c - used to print character type values\n");
    printf("%%d - used to print integer type values\n");
    printf("%%f - used to print float type values\n");
    printf("%%l - used to print long type values\n");
    printf("%%lf - used to print double type values\n");
    printf("%%Lf - used to print bigger double type values\n");

    /*
    
    For the float specifier, we can control the accuracy after the decimal for the result.
    %f would give 7 decimal places accuracy which is maximum but %0.3f would give only 3 decimal places accuracy, removing other digits from the number.
    
    */
}