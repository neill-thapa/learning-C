// process array of struct inside functions
#include <stdio.h>
#include <string.h>

typedef struct {
    int roll;
    char name[50];
    float marks;
} student;

void computeHighest(student arr[], int size);
float computeAverageMark(student arr[], int size);
void findAboveAverage(student arr[], int size, float average);

int main(void)
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of students.\n");
        return 1;
    }

    student s[n];

    // take input
    printf("Enter the student details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll Number?: ");
        scanf("%d", &s[i].roll);

        getchar(); // clears the buffer by reading the leftover character

        printf("Name?: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0'; // remove newline character that fgets read

        printf("Marks out of 100?: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }
    
    computeHighest(s, n);

    float average = computeAverageMark(s, n);
    printf("The average mark: %.2f\n\n", average);

    findAboveAverage(s, n, average);

    return 0;
}

void computeHighest(student arr[], int size)
{
    float highest = arr[0].marks; // highest is of float type because marks is float
    int index = 0;
    for (int i = 1; i < size; i++) // since index 0 is already used
    {
        if (arr[i].marks > highest)
        {
            highest = arr[i].marks;
            index = i;
        }
    }

    printf("Highest Marks: %.2f scored by %s\n\n", highest, arr[index].name);
}

// function to compute the average mark
float computeAverageMark(student arr[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i].marks;
    }

    float average = sum / size;

    return average;
}

// function to find out the students who scored above average
void findAboveAverage(student arr[], int size, float average)
{
    printf("Student who scored above average:\n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i].marks > average)
        {
            printf("Roll No.: %d, %s scored %.2f\n", arr[i].roll, arr[i].name, arr[i].marks);
        }
    }
}