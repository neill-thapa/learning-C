// string access: printing each character in a string and its substrings
#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[] = "Hello World!";

    // print characters
    printf("Characters:\n");
    for (int i = 0, length = strlen(string); i < length; i++)
    {
        printf("%c\n", string[i]);
    }
    printf("\n"); // printf a new line after the loop

    // print substrings
    printf("Substrings:\n");
    for (int i = 0, length = strlen(string); i < length; i++)
    {
        printf("%s\n", string + i); // %s accepts only the address of the elements
    }

    return 0;
}