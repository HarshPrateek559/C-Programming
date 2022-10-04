#include <stdio.h>

/*
In C language, string is considered an array of characters. 

To declare a string, we have to declare a character array of minimum length of one more than the number of characters present in the string.

A string is considered a string only if it the last character is this one '\0'.

This is a null character, which marks an end of the string for compiler.
*/

int main(void)
{
    // These were the two ways to declare a string

    char c[] = "Hello World"; // This is one way of declaring a string. Due to the double quotes, we don't need to explicitly end the string with the null character, the compiler do it for us.

    char d[100] = {'h', 'e', 'l', 'l', 'o', '\0'}; // We can take a character array as large as we want, just we need to keep it one value more than the length of the string, rest whole array would simply go empty without any problem. In this case, the array is considered a string by the compiler.

    // To take input in the string, first we need to declare a character array of relatively large size than our string.
     char x[101];
     printf("Input a string value with less than 100 characters. It is inputted using the get function: ");
     gets(x); // This function is a part of the stdio.h library. It takes string input from the user. The scanf function can only take string values without spaces but this function does not have those problems thus it is better to use this function over scanf.

     printf("This is the string which is inputted: %s\n", x);

     // There is one more way to print a string in c language, although it is not a great decision to use it since it is harder to display messages along with our string.

     printf("This text is printed using the put function: ");
     puts(x); // This function is also a part of the stdio.h library. It takes a string and print it on the screen like printf, the only problem is that it cannot take messages with it, thus printing messages is harder with this approach.

     // we can also use scanf function for string input but it would not be able to take the whitespace character.

     char y[101];

     printf("Input a string with scanf function: ");
     scanf("%s", y);

     printf("This string was inputted using the scanf function it is not taking the text beyond the whitespace: ");
     puts(y);
}