#include <stdio.h>

int main()
{
    float num1, num2;
    float sum;
    printf("Enter the numbers: \n");
    scanf("%f %f", &num1, &num2);

    sum = num1 + num2;

    printf("The sum of the numbers: %.2f", sum);

    return 0;
}