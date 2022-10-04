#include <stdio.h>
#include <stdlib.h>

int ispalindrome(int n);

int main(int argc, char *argv[]) // The char* makes argv a string array instead of a character array.
{
    int n;
    printf("Enter the number to be checked: ");
    scanf("%i", &n);

    if (ispalindrome(n))
    {
        printf("%i is a palindrome number", n);
    }
    else
    {
        printf("%i is not a palindrome number", n);
    }
    return 0;
}

int ispalindrome(int n)
{
    int x = n;
    int r = 0;
    while (x != 0)
    {
        r = r * 10 + x % 10;
        x /= 10;
    }
    if (r == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}