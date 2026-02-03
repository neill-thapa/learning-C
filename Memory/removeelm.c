#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void increase_capacity(int **arr, int *size, int *capacity, int value);
void remove_element(int **arr, int *size, int index);
void insert_element(int **arr, int *size, int *capacity, int index, int value);

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
        increase_capacity(&ptr, &size, &capacity, integer);
    }

    // print the array
    printf("Your array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // array modification: remove an element
    char ch;
    int index;
    do 
    {
        printf("Do you want to remove an element from the array (y/n)?: ");
        scanf(" %c", &ch); // ignore the whitespace
        ch = toupper(ch);
    }
    while (ch != 'Y' && ch != 'N'); // basic edge case
    if (ch == 'Y')
    {
        // safety check
        do
        {
            printf("Enter the index of the element you want to remove: ");
            scanf("%d", &index);
        }
        while (index < 0 || index >= size);

        remove_element(&ptr, &size, index);

        // updated array
        printf("New array:\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", ptr[i]);
        }
        printf("\n");
    }

    // array modification: insert and element
    int new_el;

    do 
    {
        printf("Do you want to add an element to the array (y/n)?: ");
        scanf(" %c", &ch); // ignore the whitespace
        ch = toupper(ch);
    }
    while (ch != 'Y' && ch != 'N');
    if (ch == 'Y')
    {
        // safety check
        do
        {
            printf("Enter the index you want to add element in: ");
            scanf("%d", &index);
        }
        while (index < 0 || index > size);

        printf("Enter the new number: ");
        scanf("%d", &new_el);

        insert_element(&ptr, &size, &capacity, index, new_el);

        // updated array
        printf("New array:\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", ptr[i]);
        }
        printf("\n");
    }

    free(ptr);

    return 0;
}

void increase_capacity(int **arr, int *size, int *capacity, int value)
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

void remove_element(int **arr, int *size, int index)
{
    for (int i = index; i < *size - 1; i++) // shift element on right, beginning from index, to the left by 1 step
    {
        *(*arr + i) = *(*arr + (i + 1));
    }
    (*size)--;

    if (*size > 0)
    {
        int *temp = realloc(*arr, (*size) * sizeof(int)); // shrink the array according to new size
        if (temp == NULL)
        {
            return;
        }

        *arr = temp;
    }
}

void insert_element(int **arr, int *size, int * capacity, int index, int value) // for inserting an element at a certain index in the array
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

    // shift element to the right starting from the end
    for (int i = *size; i > index; i--)
    {
        *(*arr + i) = *(*arr + (i - 1));
    }
    
    // add element entered by the user at the desired index
    *(*arr + index) = value;
    (*size)++;
}
