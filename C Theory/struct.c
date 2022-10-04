#include <stdio.h>
#include <string.h>

//typedef keyword is used to change the name of a predefined datatype, like changing double to points, long to nums etc. It can be used incase of the datatypes which are too long to use everytime, like the unsigned datatypes.

// This is an example of typedef in use
typedef struct Student
{
    // This is an example of a struct. It is a user defined datatype which works like an object in C.
    char name[100]; //- This is the string representation as a character array
    int age;
    float marks;
    char section;
} Student;

int main(int argc, char *argv[]) // The char* makes argv a string array instead of a character array.
{
    //struct Student harsh;  This is how we can declare variables of the struct Student type. Since typedef keyword is used at the struct formation line, we can simply use the name of the struct i.e Student.

    Student harsh; // This line would declare a variable of the type Student.

    // harsh.name = "Harsh"; - This is not the way to assign value to an array of characters in C.
    strcpy(harsh.name, "Harsh"); // It can be done this way.
    harsh.age = 21;              // To assign or use the value, we have to use the dot "." operator.
    harsh.marks = 99.8;
    harsh.section = 'A';

    printf("\tName: %s\n\tAge: %i\n\tMarks: %0.1f\n\tSection: %c\n", harsh.name, harsh.age, harsh.marks, harsh.section);
        
    return 0;
}
