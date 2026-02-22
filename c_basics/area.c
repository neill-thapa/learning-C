#include <stdio.h>
#define PI 3.14159

int main()
{
    float radius, area, circumference;
    int result;
    int c;

    do
    {
        printf("Enter the radius: ");
        result = scanf("%f", &radius);

        // Clear input buffer if scanf failed
        if (result != 1)
        {
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Invalid input. Please enter a number.\n\n");
        }
        else if (radius < 0)
        {
            printf("Radius cannot be negative...\nEnter a positive number.\n\n");
        }

    } 
    while (result != 1 || radius < 0);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("The area of the circle: %.2f\n", area);
    printf("The circumference of the circle: %.2f\n", circumference);

    return 0;
}