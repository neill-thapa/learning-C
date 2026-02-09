// This is a simple student record management program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    int marks[3]; // marks of three subjects
    float average;
    char grade;
} student;

void ensure_capacity(student **arr, int *size, int *capacity);
void results(student *arr, int index);

int main(void)
{
    char subjects[3][20] = {"Physics", "Chemistry", "Mathematics"};

    // initial memory allocation
    int capacity = 2;
    int size = 0;
    student *students = malloc(capacity * sizeof(student));
    if (students == NULL)
    {
        return 1;
    }

    int number;
    printf("Enter the number of students: ");
    scanf("%d", &number);

    printf("Enter the student details:\n");
    for (int i = 0; i < number; i++)
    {
        // check if memeory expansion is needed
        ensure_capacity(&students, &size, &capacity);

        // enter id
        printf("Student %d:\n", i + 1);
        printf("Id?: ");
        scanf("%d", &students[i].id);

        getchar(); // clear the buffer

        // enter the name of students
        printf("Name of the student?: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // remove the newline

        // enter marks
        printf("Marks? (Subjects: Physics, Chemistry, and Mathematics):\n");
        for (int j = 0; j < 3; j++ )
        {
            printf("Enter the marks (%s): ", subjects[j]);
            scanf("%d", &students[i].marks[j]);
        }
        printf("\n");

        size++;
    }

    for (int i = 0; i < size; i++)
    { 
        results(students, i); // compute the operations
    }

    // print details
    printf("Student Record:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Id: %d, Name: %s\n", students[i].id, students[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("Scored %d in %s\n", students[i].marks[j], subjects[j]);
        }
        printf("Average: %.2f, Grade: %c\n", students[i].average, students[i].grade);

        printf("\n");
    }

    free(students); // free the memory

    return 0;
}

void ensure_capacity(student **arr, int *size, int *capacity)
{
    if (*size == *capacity)
    {
        *capacity *= 2;
        student *temp = realloc(*arr, (*capacity) * sizeof(student));
        if (temp == NULL)
        {
            printf("Memory allocation failed.\n");
            return;
        }

        *arr = temp;
    }
}

void results(student *arr, int index)
{
    int sum = 0;
    for (int j = 0; j < 3; j++) 
    {
        sum += arr[index].marks[j];
    }

    arr[index].average = sum / 3.0;

    if (arr[index].average >= 90) 
    {
        arr[index].grade = 'A';
    }
    else if (arr[index].average >= 75) 
    {
        arr[index].grade = 'B';
    }
    else if (arr[index].average >= 60) 
    {
        arr[index].grade = 'C';
    }
    else if (arr[index].average >= 50) 
    {
        arr[index].grade = 'D';
    }
    else 
    {
        arr[index].grade = 'F';
    }
}