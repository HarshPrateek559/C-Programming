#include <stdio.h>

long fabinocci(long x);

long main(long argc, char* argv[]) //The char* makes argv a string array instead of a character array.
{
    long x;
    printf("Enter the term of the fabinocci series that is to be printed: ");
    scanf("%ld", &x);
    printf("The %ld th term in the fabinocci series is : %ld",x,fabinocci(x));
    return 0;
}

long fabinocci(long x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return fabinocci(x - 1) + fabinocci(x - 2);
    }
}