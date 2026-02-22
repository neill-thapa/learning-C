// Array traversal using indexing and pointer arithmetic
#include <stdio.h>

int main(void)
{
    int number[5] = {10, 20, 30, 40, 50};

    int length = sizeof(number) / sizeof(number[0]); // length of the array

    // print using array indexing
    printf("Using indexing:\n");
    for (int i = 0; i < length; i++)
    {
        printf("number[%d]: %d\n", i, number[i]);
    }

    // print using pointer arithmetic
    printf("Using pointer arithmetic:\n");
    for (int i = 0; i < length; i++)
    {
        printf("*(number + %d): %d\n", i, *(number + i)); // dereferencing
    }

    return 0;
}