// sorting algorithm: bubble sort
#include <stdio.h>

void bubbleSort(int arr[], int size);

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // declare and populate array
    int arr[size];

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Number %d?: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // before sorting
    printf("Before sorting:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, size); // call for sorting

    // after sorting
    printf("After sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++) // compare pairs
        {
            if (arr[j] > arr[j + 1]) // bubble largest number to the end
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}