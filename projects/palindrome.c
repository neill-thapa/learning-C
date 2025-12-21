#include <stdio.h>

void check_palindrome(int number);

int main()
{
    int integer;
    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &integer);
    }
    while (integer < 0);

    check_palindrome(integer);

    return 0;
}

void check_palindrome(int number)
{
    int digit, reversed_number = 0;
    int temp = number;
    while (temp > 0)
    {
        digit = temp % 10;
        reversed_number = (reversed_number * 10) + digit;
        temp /= 10;
    }

    if (reversed_number == number)
    {
        printf("PALINDROME\n");
    }
    else
    {
        printf("NOT PALINDROME\n");
    }
}