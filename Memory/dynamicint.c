// dynamic integer array
#include <stdio.h>
#include <stdlib.h>

void increase_capacity(int **arr, int size, int *capacity);
int calculate_sum(int arr[], int size);
float calculate_average(int elements_sum, int size);

int main(void)
{   
    int n;
    do 
    {
        printf("How many integers do you want to enter?: ");
        scanf("%d", &n);
    }
    while (n < 1);

    // states
    int capacity = 2; // total elements that the array can hold initially
    int size = 0;     // current elements in the array

    int *ptr = malloc(capacity * sizeof(int)); // initial array
    if (ptr == NULL)
    {
        return 1;
    }

    // populate the array
    printf("Enter %d numbers: \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Number %d?: ", i + 1);
        increase_capacity(&ptr, size, &capacity); // automatically increases size if required
        scanf("%d", ptr + size);
        size++; // update number of elements
    }

    // print the elements
    printf("The elements in array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // function call for calculating sum and average
    int sum = calculate_sum(ptr, size);
    printf("The sum of elements in the array: %d\n", sum);
    printf("The avearge: %.2f\n", calculate_average(sum, size));

    free(ptr); // free memory

    return 0;
}

void increase_capacity(int **arr, int size, int *capacity)
{
    if (size == *capacity)
    {
        *capacity *= 2;
        int *temp = realloc(*arr, (*capacity) * sizeof(int)); // expand memory 
        if (temp == NULL)
        {
            return;
        }

        *arr = temp;
    }
}

int calculate_sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

float calculate_average(int elements_sum, int size)
{
    if (size == 0)
    {
        return 0.0f; // f indicates it is a float literal not double
    }
    float average = (float) elements_sum / size;
    return average;
    
}