// dynamic integer array
#include <stdio.h>
#include <stdlib.h>

void increase_capacity(int **arr, int *size, int *capacity);

int main(void)
{   
    int n;
    printf("How many integers do you want to enter?: ");
    scanf("%d", &n);

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
        increase_capacity(&ptr, &size, &capacity); // automatically increases size if required
        scanf("%d", ptr + size);
        size++; // update number of elements
    }

    //print the elements
    printf("The elements in array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr); // free memory

    return 0;
}

void increase_capacity(int **arr, int *size, int *capacity)
{
    if (*size == *capacity)
    {
        *capacity *= 2;
        int *temp = realloc(*arr, (*capacity) * sizeof(int)); // expand memory 
        if (temp == NULL)
        {
            free(*arr);
            return;
        }

        *arr = temp;
    }
}