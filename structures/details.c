// takes input and print the details
#include <stdio.h>

// create struct student
typedef struct { 
    int roll;
    char name[50];
    float marks;
} student;

int main(void)
{
    student s1;

    printf("Enter the details of the student:\n");
    
    printf("Roll Number?: ");
    scanf("%d", &s1.roll);

    getchar(); // clear a newline

    printf("Name?: ");
    fgets(s1.name, sizeof(s1.name), stdin); // fegts for string input

    printf("Marks?: ");
    scanf("%f", &s1.marks);

    // print the details
    printf("The details of the student:\n");
    printf("Roll Number: %d\n", s1.roll);
    printf("Name: %s", s1.name); // fgets keeps the newline from the buffer
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}