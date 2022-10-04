#include <stdio.h>

/*
When we use the arithmatic operators on a pointer, the value of the pointer changes by the size of the datatype. 
ex. int* pta = 23; consider pta = 6411112
pta = pta + 1; after this line, pta = 6411116 since int has a size of 4 byte in this laptop.
similarly: char* ptra = 35; consider ptra = 6411118
ptra = ptra + 1; after this line, ptra = 6411120, since char has a value of 2 byte in this laptop.

The sizes of the datatype are different for different architecture, thus the sizes may change on any other machine.
*/

int main(void)
{
    int a[] = {23, 455, 12, 45, 28, 19, 10, 450, 90};

    //The name of the array acts as a pointer for the elements in the array
    printf("This is the memory location of the first element of this array, %d\n", a);

    //By adding a number in the array pointer, the memory location of the element is called
    printf("This is the memory location of the second element of this array, %d\n",  a + 1);

    //By the dereference operator, we can get the element stored at the memory location
    printf("This is the element stored at the first memory location, %d\n", *a);
    
    //we can also use the referencing operator on the element and use dereferencing operator to get it's value
    printf("This is the element stored at the second memory location, %d\n", *(&a[1]));
}