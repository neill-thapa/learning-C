// sorting algorithm: merge sort
#include <stdio.h>

void merge(int arr[], int l, int m, int r);
void merge_sort(int arr[], int l, int r);

int main(void)
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

    merge_sort(arr, 0, size - 1);

    // after
    printf("After sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void merge(int arr[], int l, int m, int r) 
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int left[n1], right[n2];

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++) 
    {
        left[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++) 
    {
        right[j] = arr[m + 1 + j];
    }

    // compare the elements and swap if required
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) 
    {
        if (left[i] <= right[j]) 
        {
            arr[k++] = left[i++];
        }
        else 
        {
            arr[k++] = right[j++];
        }
    }

    // copy the remaining elements
    while (i < n1) 
    {
        arr[k++] = left[i++];
    }

    while (j < n2) 
    {
        arr[k++] = right[j++];
    }
}

void merge_sort(int arr[], int l, int r) // takes array along with left most element and right most element
{
    if (l < r) 
    {
        int m = l + (r - l) / 2; // start at left, move half way towards right
                                 // prevents integer overflow
        merge_sort(arr, l, m); // left part
        merge_sort(arr, m + 1, r); // right part
        merge(arr, l, m, r);
    }
}