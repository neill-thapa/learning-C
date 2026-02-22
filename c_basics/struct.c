// basic example of a struct
#include <stdio.h>

struct Student
{
    int roll_num;
    float marks;
};

int main(void)
{
    struct Student s1;

    s1.roll_num = 10; // . is a memeber access operator
    s1.marks = 95.55;

    printf("Roll Number: %d\n", s1.roll_num);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}