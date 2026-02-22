#include <stdio.h>

void check_second_largest(int array_of_numbers[], int size);

int main(void)
{
    int n;
    do
    {
        printf("n? (should be between 1 to 100): ");
        scanf("%d", &n);
    }
    while(n <= 1 || n >100);

    int number[n];

    printf("Enter %d numbers: \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("number[%d]: ", i);
        scanf("%d", &number[i]);
    }

    check_second_largest(number, n);

    return 0;
}

void check_second_largest(int array_of_numbers[], int size)
{
    int largest = array_of_numbers[0];
    for (int i = 1; i < size; i++)
    {
        if(array_of_numbers[i] > largest)
        {
            largest = array_of_numbers[i];
        }
    }

    int second_largest = array_of_numbers[0];
    for(int i = 1; i < size; i++)
    {
        if (array_of_numbers[i] != largest) // needs change
        {
            second_largest = array_of_numbers[i];
        }
    }

    if (largest == second_largest)
    {
        printf("No second largest !\n");
    }
    else
    {
        printf("Second largest: %d\n", second_largest);
    }
}