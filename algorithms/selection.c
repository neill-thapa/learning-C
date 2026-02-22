// sorting algorithm: selection sort
#include <stdio.h>

void selectionSort(int arr[], int n);

int main(void) 
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Number %d?: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // before sorting
    printf("Before sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, size); // function call for selection sort

    // after sorting
    printf("After sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void selectionSort(int arr[], int n) // selection sort algorithm
{
    for (int i = 0; i < n-1; i++)
    {
        int min_index = i;
        for (int j = i+1; j < n; j++) 
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        
        // Swap
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
