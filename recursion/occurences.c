// count occurences of digit in a number
#include <stdio.h>

int countDigit(int n, int d);

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int digit;
    printf("Enter the digit you want to count: ");
    scanf("%d", &digit);

    int digitCount = countDigit(number, digit);

    printf("Number of %d's : %d\n", digit, digitCount);

    return 0;
}

int countDigit(int n, int d)
{
    if (n == 0)
    {
        return 0; // base case
    }

    int last = n % 10;
    return (last == d? 1 : 0) + countDigit(n / 10, d); // recursive call
}