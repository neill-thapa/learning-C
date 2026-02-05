// input student details
#include <stdio.h>

struct Student
{
    int roll;
    float marks;
};

int main(void)
{
    struct Student s;

    printf("Enter roll number and marks:\n");
    scanf("%d %f", &s.roll, &s.marks);

    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
