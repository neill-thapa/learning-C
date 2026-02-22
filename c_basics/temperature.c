#include <stdio.h>
#define FAHRENHEIT(x) ((9.0/5.0 * x) + (32))

int main()
{
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = FAHRENHEIT(celsius);

    printf("The temperature in Fahrenheit: %.2f", fahrenheit);

    return 0;
}