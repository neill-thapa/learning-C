#include <stdio.h>

// prototypes
int countDigits(int number);
int sumDigits(int number);
int largestDigit(int number);

int main()
{
    int integer;
    do 
    {
        printf("Enter the number: ");
        scanf("%d", &integer);
    }
    while(integer < 0);

    //calling functions
    int count_digits = countDigits(integer); 
    int sum_digits = sumDigits(integer);
    int largest = largestDigit(integer);

    printf("Total digits: %d\n", count_digits);
    printf("Sum of digits: %d\n", sum_digits);
    printf("Largest digit: %d\n", largest);

    return 0;
}

int countDigits(int number) // counts the total number of digits
{
    int counter = 0;
    if(number == 0)
    {
        counter = 1;
    }
    else
    {
        while(number > 0)
        {
            counter++;
            number /= 10;
        }
    }

    return counter;
}

int sumDigits(int number) // sums the digits
{
    int sum_digits = 0, extract_last_digit;
    while(number > 0)
    {
        extract_last_digit = number % 10;
        sum_digits += extract_last_digit;
        number /= 10;
    }
    return sum_digits;
}

int largestDigit(int number) // finds out the largest digit
{
    int largest = 0, last_digit;
    while(number > 0)
    {
        last_digit = number % 10;
        if(last_digit > largest)
        {
            largest = last_digit;
        }

        number /= 10;
    }
    return largest;
}