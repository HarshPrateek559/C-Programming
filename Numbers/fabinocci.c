#include <stdio.h>

int main(void)
{
    int limit; 
    printf("How many numbers are to be printed: ");
    scanf("%d", &limit);
    int x = 0; 
    int y = 1;
    int c;
    printf("%d %d ", x, y);
    for(int i = 0; i<limit; i++)
    {
        c = x+y;
        printf("%d ",c);
        x = y;
        y = c;
    }
    printf("\n");
    return 0;
}