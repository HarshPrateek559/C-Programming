/*
Binary Search Algorithm: The basic steps to perform Binary Search are:

1) Begin with the mid element of the whole array as a search key.

2) If the value of the search key is equal to the item then return an index of the search key.

3) Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.

4) Otherwise, narrow it to the upper half.

5) Repeatedly check from the second point until the value is found or the interval is empty.
*/

#include <stdio.h>

int binarySearch(int arr[], int x, int low, int high);

int main(void)
{
    int a[] = {1, 4, 7, 9, 16, 56, 70};
    int size = sizeof(a) / sizeof(a[0]); // This line can be used to calculate the size of an array of unknown size. Although the sizeof function can only be used in the main function.

    int x;
    printf("Enter the number that is to be searched in the array: ");
    scanf("%d", &x);

    int p = binarySearch(a, x, 0, size);
    if (p == -1)
        printf("The number %d is not present in the array\n", x);
    else
        printf("The number %d is present at %dth index of the array", x, p);
}

int binarySearch(int a[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // if you put this outside of the loop, then the loop would become infinite
        if (x == a[mid])
        { // This block would return the index of the array on which the number is present. It would first check the middle term of the array and then would split the array from left or right in accordance of whether the number is lower or higher than the middle term.
            return mid;
        }
        else if (a[mid] < x)
        { // If the number is smaller than the middle term, then the array is split to the left side and the loop would check only the left side of the array.
            low = mid + 1;
        }
        else
        { // If the number is larger than the middle term, then the array is split to the right side and the loop would check the right side only.
            high = mid - 1;
        }
    }
    return -1; // The function would return -1 if the number is not found in the array.
}
