// demonstration of binary search
// binary search only works in sorted data
#include <stdio.h>

int binarySearch(int arr[], int size, int target);

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int size = sizeof(arr) / sizeof(arr[0]);

    int number;
    printf("Enter a number to search: ");
    scanf("%d", &number);

    // function call
    int index = binarySearch(arr, size, number);

    if (index == -1)
    {
        printf("The number is not in the array.\n");
    }
    else 
    {
        printf("The number is at arr[%d] in the array.\n", index);
    }

    return 0;
}

int binarySearch(int arr[], int size, int target) // binary search algorithm for sorted data
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid; // found
        }
        else if (arr[mid] < target)
        {
            low = mid + 1; // search the right side
        }
        else
        {
            high = mid - 1; // search the left side
        }
    }

    return -1; // not found
    
}