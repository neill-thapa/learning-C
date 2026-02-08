// program that stores and prints the details of n students
#include <stdio.h>

typedef struct{
    int roll;
    char name[50];
} student;

int main(void)
{
    int n;
    printf("Enter the number of student: ");
    scanf("%d", &n);

    student s[n];

    printf("Enter student details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll Number?: ");
        scanf("%d", &s[i].roll);

        getchar(); // clears the buffer by consuming the leftover character

        printf("Name?: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("\n");
    }

    // print the details
    printf("Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name); // fgets reads the newline as well, so double newline to create space between details

    }

    return 0;
}