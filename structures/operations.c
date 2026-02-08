// basic operations like printing highest marks, average marks and above average
#include <stdio.h>
#include <string.h>

typedef struct {
    int roll;
    char name[50];
    float marks;
} student;

int main(void)
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // get details
    student s[n];
    
    printf("Enter the student details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll Number?: ");
        scanf("%d", &s[i].roll);

        getchar(); // empty the buffer

        printf("Name?: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0'; // remove newline character that fgets reads

        printf("Marks out of 100?: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n");

    // print the highest marks
    float highest = s[0].marks;
    for (int i = 0; i < n; i++)
    {
        if (s[i].marks > highest)
        {
            highest = s[i].marks;
        }
    }
    printf("Highest Mark: %.2f\n", highest);

    // calculate and print the average marks
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += s[i].marks;
    }

    float average = sum / n;
    printf("Average Mark: %.2f\n\n", average);

    // students whose marks are above average
    printf("Student with marks above average:\n");
    for (int i = 0; i < n; i++)
    {
        if (s[i].marks > average)
        {
            printf("%s -> Marks: %.2f\n", s[i].name, s[i].marks); // no newline because fgets already has a newline while giving input
        }
    }

    return 0;
}