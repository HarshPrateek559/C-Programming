#include <stdio.h>

//This is the bubble sort implementation in C language. 

int bubbleSort(int arr[]);
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
    bubbleSort(arr);
}

int bubbleSort(int arr[])
{
    int size = 5;

    for(int i = 0; i<size - 1; i++)
    {
        for(int j = 0; j<size -1-i; j++)
        {
            if(arr[j]>arr[j+1]){
                int c = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = c;
            }
        }
    }
    printf("This is the array sorted with bubble sort: ");
    for(int i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }
}