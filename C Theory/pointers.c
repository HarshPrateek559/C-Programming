#include <stdio.h>
/*
A pointer is a special variable that stores the memory location of another variable.

This is the syntax : - int* pointer_name = &variable_name;

The * represent a pointer is made and the & represent the memory location of the variable in the RAM.

& is considered as the "Referencing Operator", it returns the memory location of the variable regardless of what its value is.

* is considered as the "Dereferencing Operator", it returns the value stored in the variable, to which the pointer is pointing, instead of returning its memory location.

*/
int main(void)
{
    int a = 100;
    printf("The variable a is %d\n", a);
    printf("Address of variable a is %d\n", &a); // This statement would print the memory location of the variable a.

    printf("The value of the variable a from the pointer's reference is %x\n", *(&a)); // This statement would print the value of the variable a. 

    int* ptra = NULL; /*
    This is a null pointer, a pointer that is not pointing at any variable but is made to be 
    pointed anything afterwards in the execution of the program. 
    */

    printf("The value of the pointer ptra is %d since it is not referencing to any variable.\n", ptra); // The output of this statement would be 0 since no memory location is stored in this pointer, it is just like an empty box, waiting to be filled. 

    return 0;
}