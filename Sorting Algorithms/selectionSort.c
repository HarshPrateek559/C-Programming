#include <stdio.h>
// This is an implementation of Selection Sort in C language
int selectionSort(int arr[]);
int main(void)
{
    int arr[5];
    printf("Enter the numbers required to be sorted: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("This is the array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    selectionSort(arr);
}

int selectionSort(int arr[])
{

    for (int i = 0; i < 4; i++)
    {
        int min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int c = arr[i];
            arr[i] = arr[min];
            arr[min] = c;
        }
    }

    printf("This is the array sorted with selection sort: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}