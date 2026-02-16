// count vowels in a string recursively
#include <stdio.h>
#include <string.h>

int isVowel(char c);
int countVowels(char str[]);

int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    printf("Vowels = %d\n", countVowels(str));
    return 0;
}

int isVowel(char c) 
{
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; vowels[i] != '\0'; i++) 
    {
        if (c == vowels[i])
        {
            return 1;
        }
    }
    return 0;
}

int countVowels(char str[]) 
{
    if (str[0] == '\0') 
    {
        return 0; // base case
    }

    return isVowel(str[0]) + countVowels(str + 1); // recursive step
}