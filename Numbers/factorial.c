#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter the number of which factorial is to be calculated: ");
    scanf("%d", &num);
    int factorial = 1;
    for(int i = 1; i<=num; i++)
    {
        factorial*=i;
    }
    printf("The factorial of %d is %d\n", num, factorial);
    int choice;
    printf("Want to do again? Press 1 for again and 0 for stop: ");
    scanf("%d", &choice);
    if(choice){
        main();
    }
}