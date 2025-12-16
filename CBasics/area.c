#include <stdio.h>
#define PI 3.14159

int main ()
{
    float radius, area, circumference;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI *radius;

    printf("The area of the circle: %.2f\n", area);
    printf("The circumference of the circle: %.2f\n", circumference);

    return 0;
}