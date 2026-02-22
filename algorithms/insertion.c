// sorting algorithm: insertion sort
#include <stdio.h>

void insertion_sort(int arr[], int n);

int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Number %d?: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // before
    printf("Before sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertion_sort(arr, size);

    // after 
    printf("After sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void insertion_sort(int arr[], int size) // insertion algorithm
{
    for (int i = 1; i < size; i++) 
    {
        int key = arr[i];
        int j = i - 1;

        // Shift elements greater than key
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // insert key
    }
}
