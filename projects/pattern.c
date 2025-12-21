#include <stdio.h>

void left_aligned_pattern(int number);
void right_aligned_pattern(int number);
void pyramid(int number);

int main()
{
    int integer;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &integer);
    } 
    while (integer < 1 || integer > 10);
    
    printf("The left aligned pattern of numbers:\n");
    left_aligned_pattern(integer);

    printf("The right aligned pattern of numbers:\n");
    right_aligned_pattern(integer);

    printf("This is the pyramid: \n");
    pyramid(integer);

    return 0;
}

void left_aligned_pattern(int number)
{
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d", i + 1);
        }
        printf("\n");
    } 
    printf("\n");
}

void right_aligned_pattern(int number)
{
    for (int i = 0; i < number; i++)
    {
        for (int j1 = 0; j1 < number - i - 1; j1++)
        {
            printf(" ");
        }
        for (int j2 = 0; j2 < i + 1; j2++)
        {
            printf("%d", i + 1);
        }
        printf("\n");
    }
    printf("\n");
}

void pyramid(int number)
{
    for (int i = 0; i < number; i++)
    {
        for (int j1 = 0; j1 < number - i - 1; j1++)
        {
            printf(" ");
        }
        for (int j2 = 0; j2 < i + 1; j2++)
        {
            printf("%d", i + 1);
        }
        
        printf("  ");

        for (int j3 = 0; j3 < i + 1; j3++)
        {
            printf("%d", i + 1);
        }
        printf("\n");
    }
}