#include <stdio.h>

int main()
{
    int integer;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &integer);
    } 
    while (integer < 1 || integer > 10);

    for (int i = 0; i < integer; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d", i + 1);
        }
        printf("\n");
    }
}