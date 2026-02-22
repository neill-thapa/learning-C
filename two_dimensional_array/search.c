// program to search for a number in 2d array
#include <stdio.h>

int main(void)
{
    int arr[3][4] = {
        {10, 40, 50, 35},
        {25, 22, 34, 80},
        {15, 16, 12, 19}
    };

    int number;
    printf("Enter the number to see if it exists in the array: ");
    scanf("%d", &number);
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == number)
            {
                printf("Found! %d is at arr[%d][%d].\n", number, i, j);
                return 0;
            }            
        }
    }

    printf("The number is not found in the array!\n");

    return 0;
}