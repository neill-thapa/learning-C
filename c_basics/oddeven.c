#include <stdio.h>

int main() 
{
    int number, temp, result;
    do
    {
        printf("Enter a number: ");
        result = scanf("%d", &number); 
        
        if(result != 1) // invlaid input handling
        {
            printf("Invalid input. Please enter a number.\n");
            int c;
            // This loop clears any leftover characters from the input buffer.
            // When scanf fails (e.g., user types a string instead of a number), 
            // the invalid input remains in the buffer, which would cause 
            // the next scanf to fail again.
            // 
            // Components explained:
            // c = getchar()      → reads one character from the input buffer and removes it
            // != '\n'            → continues looping until the newline character (Enter key) is reached
            // && c != EOF        → also stops if the end-of-file is reached (rare, but safe to include)
            // { }                → empty body: we don’t use the character, we just discard it
            //
            // How it works step by step:
            // - Each call to getchar() removes the next character from the input buffer.
            // - The loop repeats until it encounters the newline (\n) or EOF.
            // - This ensures that all leftover invalid input is discarded, 
            //   so the program can safely ask the user for input again.
            while ((c = getchar()) != '\n' && c != EOF) { }
        }
        else if (number < 1)
        {
            printf("Please enter a number greater than or equal to 1.\n");
        }
    } 
    while (result != 1 || number < 1);
    
    temp = number;

    while (temp != 0 && temp != 1)
    {
        temp = temp - 2;
    }
    if (temp == 0)
    {
        printf("%d is an even number!", number);
    }
    else
    {
        printf("%d is an odd number!", number);
    }

    return 0;
}