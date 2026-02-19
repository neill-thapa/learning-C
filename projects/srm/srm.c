// This is a simple student record management program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void ensure_capacity(student **arr, int *size, int *capacity);
void results(student *arr, int index);

#define NUM_SUBJECTS 3
#define INITIAL_CAPACITY 2

// Data model
typedef struct {
    int id;
    char name[100];
    int marks[NUM_SUBJECTS];
    float average;
    char grade;
} Student;

int main(void) {}

    // initial memory allocation
    int size = 0, capacity = INITIAL_CAPACITY;
    Student *students = malloc(capacity * sizeof(Student));
    if (!students) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int number;
    printf("Enter the number of students: ");
    scanf("%d", &number);

    printf("Enter the student details:\n");
    for (int i = 0; i < number; i++) {
        // memeory expansion check
        ensure_capacity(&students, &size, &capacity);

        // input
        printf("Student %d:\n", i + 1);
        printf("Id?: ");
        scanf("%d", &students[i].id);

        getchar(); // clear the buffer

        printf("Name of the student?: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // remove the newline

        printf("Marks? (Subjects: Physics, Chemistry, and Mathematics):\n");
        for (int j = 0; j < 3; j++ )
        {
            int marks;
            do {
                printf("Enter the marks (%s): ", subjects[j]);
                scanf("%d", &marks);

                if (marks < 0 || marks > 100) {
                    printf("Invalid marks! Please enter a value between 0 and 100.\n");
                }
            }
            while (marks < 0 || marks > 100);

            students[i].marks[j] = marks;
        }
        printf("\n");

        size++;
    }

    for (int i = 0; i < size; i++) { 
        results(students, i); // function call to compute the operations
    }

    // print details
    printf("Student Record:\n");
    for (int i = 0; i < size; i++) {
        printf("Id: %d, Name: %s\n", students[i].id, students[i].name);
        for (int j = 0; j < 3; j++) {
            printf("Scored %d in %s\n", students[i].marks[j], subjects[j]);
        }
        printf("Average: %.2f, Grade: %c\n", students[i].average, students[i].grade);

        printf("\n");
    }

    free(students); // free the memory

    return 0;
}

void ensure_capacity(student **arr, int *size, int *capacity) {
    if (*size == *capacity) {
        *capacity *= 2;
        student *temp = realloc(*arr, (*capacity) * sizeof(student));
        if (temp == NULL) {
            printf("Memory allocation failed.\n");
            return;
        }

        *arr = temp;
    }
}

void results(student *arr, int index) {
    int sum = 0;
    for (int j = 0; j < 3; j++) {
        sum += arr[index].marks[j];
    }

    arr[index].average = sum / 3.0;

    if (arr[index].average >= 90) {
        arr[index].grade = 'A';
    }
    else if (arr[index].average >= 75) {
        arr[index].grade = 'B';
    }
    else if (arr[index].average >= 60) {
        arr[index].grade = 'C';
    }
    else if (arr[index].average >= 50) {
        arr[index].grade = 'D';
    }
    else {
        arr[index].grade = 'F';
    }
}

void write_students(student *arr, int size, const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (!fp) {
        printf("Error opening file for writing.\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        fprintf(fp, "%d;%s;%d;%d;%d\n", arr[i].id, arr[i].name, arr[i].marks[0], arr[i].marks[1], arr[i].marks[2]);
    }

    fclose(fp);
}
