#include <stdio.h>
/*
The simple steps of achieving the insertion sort are listed as follows -

Step 1 - If the element is the first element, assume that it is already sorted. Return 1.

Step2 - Pick the next element, and store it separately in a key.

Step3 - Now, compare the key with all elements in the sorted array.

Step 4 - If the element in the sorted array is smaller than the current element, then move to the next element. Else, shift greater elements in the array towards the right.

Step 5 - Insert the value.

Step 6 - Repeat until the array is sorted.
*/
int insertionSort(int a[], int n);

void print(int a[], int n);

int main(void)
{
    int arr[] = {45, 212, 23, 456, 383, 215, 98};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original Array: ");
    print(arr, n);

    printf("Sorted Array: ");
    insertionSort(arr, n);
}

void print(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int insertionSort(int a[], int s)
{
    for (int i = 1; i < s; i++)
    {
        int select = a[i]; // This line selects an element from the array
        int j = i - 1;  // this is the last element of the sorted array which is behind the selected element
        while (j >= 0 && select <= a[j])
        {
            // This loop runs from the last element of the sorted to the first element with j indicating the element from back.
            a[j + 1] = a[j];
            //If the selected element is smaller than any element of the sorted array, it will be switched from that element
            j--;
            // On each check, the value of j is reduced to check for smaller and smaller elements.
        }
        a[j + 1] = select; // This line copies the value of the selected element to the j + 1th element of the sorted array.
    }
    print(a, s);
}