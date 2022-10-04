#include <stdio.h>

void reverse(int a[], int l);
void print(int a[], int l);

int main(int argc, char* argv[]) //The char* makes argv a string array instead of a character array.
{
    int a[] = {34,5,3,45,22,23,66,54,2234,66,2,75};
    int l = sizeof(a)/sizeof(a[0]);
    printf("Before reversing: ");
    print(a,l);
    reverse(a,l);
    return 0;
}

void print(int a[], int l)
{
    for (int i = 0; i < l; i++)
    {
        printf("%i ", a[i]);
    }
    printf("\n");
}

void reverse(int a[], int l)
{
    //Loop should work from 0 to half the lenght of the array, otherwise, the array would reverse again, giving the original order of the array.
    for(int i = 0; i < l/2; i++)
    {
        //swapping elements here swap their positions in the memory
        int temp = a[i]; 
        a[i] = a[l - i - 1]; // By doing this, the middle value is spared from duplication
        a[l - i - 1] = temp;
    }
    printf("After reversing: ");
    print(a, l);
}