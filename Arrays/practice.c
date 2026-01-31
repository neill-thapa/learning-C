#include <stdio.h>

int sum_of_array(int array_of_numbers[], int size);
int max_in_array(int array_of_numbers[], int size);
int min_in_array(int array_of_numbers[], int size);

int main()
{
    int n;
    do
    {
        printf("n? (should be between 1 to 100): ");
        scanf("%d", &n);
    }
    while(n < 1 || n >100);
    
    int number[n];

    printf("Enter %d numbers: \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("number[%d]: ", i);
        scanf("%d", &number[i]);
    }

    int sum = sum_of_array(number, n);
    int max = max_in_array(number, n);
    int min = min_in_array(number, n);

    printf("Sum: %d\n", sum);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}

int sum_of_array(int array_of_numbers[], int size) // Sum of the elements of the array
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array_of_numbers[i];
    }
    
    return sum;
}

int max_in_array(int array_of_numbers[], int size) // Maxmimum in the array
{  
    int max = array_of_numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (array_of_numbers[i] > max)
        {
            max = array_of_numbers[i];
        }
    }

    return max;
}

int min_in_array(int array_of_numbers[], int size) // Minimum in the array
{
    int min = array_of_numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (array_of_numbers[i] < min)
        {
            min = array_of_numbers[i];
        }
    }
    
    return min;
}