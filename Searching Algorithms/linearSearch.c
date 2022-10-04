#include <stdio.h>

int main(void)
{
    int arr[] = {45, 212, 23, 456, 383, 215, 98};
    int x, flag;
    flag = -1;
    printf("Enter the number that is to be searched in the array: ");
    scanf("%d", &x);
    for(int i = 0; i<8; i++)
    {
        if(x==arr[i]){
            flag = i;
        }
    }
    if(flag!=-1)
    {
        printf("The number %d is present at %d position in array\n", x, flag+1);
    }
    else
    {
        printf("The number %d is not present in the array\n", x);
    }
}