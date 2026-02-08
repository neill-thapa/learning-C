// demonstrates passing a single struct to a function
#include <stdio.h>
#include <string.h>

typedef struct {
    int roll;
    char name[50];
    float marks;
} student;

void printStruct(student s);

int main(void)
{
    student s;

    s.roll = 10;
    strcpy(s.name, "Neil Thapa"); // cannot assign a string to name directly, 
                                   // instead strcpy is used to copy the string into the memory allocated for name
    s.marks = 89.75;

    printStruct(s); // function call

    return 0;
}

// function to print a single struct
void printStruct(student s) // pass by value (struct is copied into function)
{
    printf("Roll No.: %d, %s scored %.2f\n", s.roll, s.name, s.marks);
}