/*
This is a program that converts one unit to another. These are the units that are converted here:-

1. inches to foot
2. kms to miles
3. pound to kgs
4. cms to inches
5. inches to foot
6. cms to meter
*/
#include <stdio.h>

float inchToFoot(float i);
float kmsToMiles(float i);
float poundToKgs(float i);
float cmsToInch(float i);
float inchToMeters(float i);
float cmsToMeter( float i );

int main(void)
{
    int def = 0;
    int truth = 1;
        float num;
        float result = 0;
        printf("Enter the number that is to be converted: ");
        scanf("%f", &num);

        printf("Enter the corresponding number for your choice.\n");
        int choice;

        printf("\tPress 1 for converting inch to foot.\n");
        printf("\tPress 2 for converting kms to miles.\n");
        printf("\tPress 3 for converting pound to kgs.\n");
        printf("\tPress 4 for converting cms to inch.\n");
        printf("\tPress 5 for converting inch to meter.\n");
        printf("\tPress 6 for converting cms to meter.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            result = inchToFoot(num);
            printf("%0.2f inches are equal to %0.2f foot\n", num, result);
            break;
        case 2:
            result = kmsToMiles(num);
            printf("%0.2f Kilometer are equal to %0.2f Miles\n", num, result);
            break;
        case 3:
            result = poundToKgs(num);
            printf("%0.2f Pound are equal to %0.2f Kilograms\n", num, result);
            break;
        case 4:
            result = cmsToInch(num);
            printf("%0.2f Centimeter are equal to %0.2f Inches\n", num, result);
            break;
        case 5:
            result = inchToMeters(num);
            printf("%0.2f Inch are equal to %0.2f Meters\n", num, result);
            break;
        case 6:
            result = cmsToMeter(num);
            printf("%0.2f Centimeter are equal to %0.2f Meters\n", num, result);
            break;
        default: 
            printf("invalid case\n");
            def++;
            break;
        }
        if (result != 0||def!=0) //This block is used as a loop if the user wants to do further operations in the program. Whether a result is obtained or not, the user is asked whether he wants to continue or not.
        {
            printf("Want to continue? Press 1 to continue and 0 to stop: ");
            scanf("%d", &truth);
            if(truth == 1)
                main();
        }
    return 0;
}

float inchToFoot(float num)
{
    return num / 12;
}

float kmsToMiles(float num)
{
    return num * 0.621371;
}

float poundToKgs(float num)
{
    return num * 0.453592;
}

float cmsToInch(float num)
{
    return num * 0.393701;
}

float inchToMeters(float num)
{
    return num * 0.0254;
}

float cmsToMeter ( float num )
{
    return num/100;
}