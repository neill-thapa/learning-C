#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void push_back(int **arr, int *size, int *capacity, int value);
void pop_back(int **arr, int *size, int index);

int main(void)
{
    int capacity = 2;
    int size = 0;
    int *ptr = malloc(capacity * sizeof(int));
    if (ptr == NULL)
    {
        return 1;
    }

    int number;
    printf("How many numbers do you want to store in the array?: ");
    scanf("%d", &number);

    // user input
    printf("Enter %d numbers:\n", number);
    for (int i = 0; i < number; i++)
    {
        int integer;
        printf("Number %d?: ", i + 1);
        scanf("%d", &integer);
        push_back(&ptr, &size, &capacity, integer);
    }

    // print the array
    printf("Your array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // array modification
    char ch;
    int index;
    printf("Do you want to remove an element from the array (y/n)?: ");
    scanf(" %c", &ch); // ignore the whitespace
    ch = toupper(ch);
    if (ch == 'N')
    {
        free(ptr);
        return 0;
    }
    else if (ch == 'Y')
    {
        // safety check
        do
        {
            printf("Enter the index of the element you want to remove: ");
            scanf("%d", &index);
        }
        while (index < 0 || index >= size);

        pop_back(&ptr, &size, index);

    }

    // updated array
    printf("New array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);

    return 0;
}

void push_back(int **arr, int *size, int *capacity, int value)
{
    if (*size == *capacity)
    {
        *capacity *= 2;
        int *temp = realloc(*arr, (*capacity) * sizeof(int));
        if (temp == NULL)
        {
            return;
        }

        *arr = temp;
    }

    (*arr)[*size] = value;
    (*size)++;
}

void pop_back(int **arr, int *size, int index)
{
    for (int i = index; i < *size - 1; i++) // shift element on right beginning from index to step to the left
    {
        *(*arr + i) = *(*arr + (i + 1));
    }
    (*size)--;

    int *temp = realloc(*arr, (*size) * sizeof(int)); // shrink the array according to new size
    if (temp == NULL)
    {
        return;
    }

    *arr = temp;
}
