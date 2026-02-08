// pass an array of struct to a function
#include <stdio.h>
#include <string.h>

typedef struct {
    int roll;
    char name[50];
    float marks;
} student;

void structArray(student arr[], int size);

int main(void)
{
    int n = 3;

    student s[n];

    s[0].roll = 101;
    strcpy(s[0].name, "Ram Kumar"); // strings cannot be assigned like integers or floats, 
                                    // so strcpy copies the string into the memory allocated for name
    s[0].marks = 95.50;

    s[1].roll = 101;
    strcpy(s[1].name, "Prashun Shrestha");
    s[1].marks = 70.23;

    s[2].roll = 101;
    strcpy(s[2].name, "Rahul Yadav");
    s[2].marks = 85.63;

    structArray(s, n); // function call 

    return 0;
}

// function to print multiple structs
void structArray(student arr[], int size) // pass by reference, so the function sees the same or original memory where data is stored   
{
    for (int i = 0; i < size; i++)
    {
        printf("Roll No.: %d, %s scored %.2f\n", arr[i].roll, arr[i].name, arr[i].marks);
    }
}