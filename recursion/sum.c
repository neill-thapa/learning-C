// find the sum of the elements in the array recursively
#include <stdio.h>

int sumArray(int arr[], int size);   

int main(void)
{
    int size;
    do
    {
        printf("Enter the size of the array: ");
        scanf("%d", &size);
    }
    while (size < 1);

    // declare and populate the array
    int arr[size];

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Number %d?: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // print the array
    printf("The array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int sum = sumArray(arr, size);

    printf("The sum of elements in the array: %d\n", sum);

    return 0;
}

int sumArray(int arr[], int size)
{
    // base case
    if (size == 1)
    {
        return arr[0];
    }

    return arr[size - 1] + sumArray(arr, size - 1);
}