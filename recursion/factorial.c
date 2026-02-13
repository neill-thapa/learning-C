// find out the factorial of a number
#include <stdio.h>

int fact(int n);

int main(void)
{
    int number;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);
    }
    while (number < 0);

    int factorial = fact(number);

    printf("The factorial of %d: %d\n", number, factorial);

    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}
