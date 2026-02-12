// demonstration of linear search
#include <stdio.h>

int linearSearch(int arr[], int size, int target);

int main(void)
{
    // input the size of array
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    // populate the array
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // determine the size of array
    int size = sizeof(arr) / sizeof(arr[0]);

    int number;
    printf("Enter a number to search: ");
    scanf("%d", &number);

    // function call for linear search
    int index = linearSearch(arr, size, number);

    if (index == -1)
    {
        printf("Not found in the array.\n");
    }
    else
    {
        printf("Found! The number is at arr[%d] in the array.\n", index);
    }
    
    return 0;
}

int linearSearch(int arr[], int size, int target) // linear search algorithm
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // found, return the index
        }
    }

    return -1; // not found
}