#include <stdio.h>

int main(void){
    int d;
    printf("Enter the number of which the table is required: ");
    scanf("%d", &d);
    for(int i = 1; i<=10; i++)
    {
        int x = i;
        printf("%d x %d = %d\n",d,i,d*i);
    }
}