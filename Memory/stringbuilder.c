#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void push_back(char **arr, int *size, int *capacity, char character);

int main(void)
{   
    // initial states
    int capacity = 1;
    int size = 0;

    char *ptr = malloc(capacity * sizeof(char));
    if (ptr == NULL)
    {
        return 1;
    }

    // read characters
    printf("Enter a string or character(s): ");
    while (true)
    {
        char ch;
        scanf("%c", &ch);
        if (ch == '\n')
        {
            break;
        }
        else
        {
            push_back(&ptr, &size, &capacity, ch); // function call to increase size if needed and populate the array
        }
    }

    *(ptr + size) = '\0'; // add the null charater at the end

    // print the characters
    printf("You entered: ");
    for (int i = 0; i < size; i++)
    {
        printf("%c", ptr[i]);
    }
    printf("\n");

    free(ptr);
}

void push_back(char **arr, int *size, int *capacity, char character)
{
    if (*size == *capacity)
    {
        *capacity *= 2;
        char *temp = realloc(*arr, (*capacity) * sizeof(char));
        if (temp == NULL)
        {
            return;
        }

        *arr = temp;
    }

    (*arr)[*size] = character;
    (*size)++;
}