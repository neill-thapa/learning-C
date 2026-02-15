// reverse a string using recursion
#include <stdio.h>
#include <string.h>

void reverseString(char arr[], int start, int end);

int main(void)
{
    char str[] = "This is a test case.";
    int length = strlen(str);

    printf("Original string: %s\n", str);

    reverseString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}

void reverseString(char arr[], int start, int end) // function to recursively reverse a string
{
    if (start >= end) // base case: done reversing
    {
        return;
    }

    // swap characters at start and end
    char temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // recursive call for remaining substrings
    return reverseString(arr, start + 1, end - 1);
}