// count the digits in a number recursively
#include <stdio.h>

int count(int number);

int main(void)
{
    int number;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);
    }
    while (number < 0);

    int digitCount = count(number);

    printf("The number of digits: %d\n", digitCount);

    return 0;
}

int count(int number)
{
    // base case
    if (number < 10)
    {
        return 1;
    }
    else
    {
        return 1 + count(number / 10); // recursive call
    }
}