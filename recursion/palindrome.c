// check if the string is palindrome or not
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end);

int main(void)
{
    char str[100];
    printf("Enter a string to check palindrome: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove the newline

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }

    int length = strlen(str);

    int result = isPalindrome(str, 0, length - 1);

    if (result == 1)
    {
        printf("The string is palindrome.\n");
    }
    else
    {
        printf("The string is not palindrom.\n");
    }

    return 0;
}

int isPalindrome(char str[], int start, int end) 
{
    if (start >= end) 
    {
        return 1;   /// base case: string is done, all matched
    }

    if (str[start] != str[end]) 
    {
        return 0; // mismatch found → not a palindrome
    }

    return isPalindrome(str, start+1, end-1); // recursive call
}
