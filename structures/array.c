// array of struct that stores details of 2 students

#include <stdio.h>

struct Student
{
    int roll;
    float marks;
};

int main(void)
{
    struct Student s[2];

    // take input
    printf("Enter the roll number and marks of students:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Roll number?: ");
        scanf("%d", &s[i].roll);
        printf("Marks?: ");
        scanf("%f", &s[i].marks);
    }

    // print
    for (int i = 0; i < 2; i++)
    {
        printf("Student %d\nRoll number: %d, Marks: %.2f\n", i + 1, s[i].roll, s[i].marks);
    }

    return 0;
}