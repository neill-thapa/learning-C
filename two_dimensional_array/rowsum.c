// 2d array program that calculates the sum of elements for each row and prints it
#include <stdio.h>

int main(void)
{
    int arr[2][3];

    // populate
    printf("Enter 6 numbers:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // calculate the sum of elements in a row and print the sum
    for (int i = 0; i < 2; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < 3; j++)
        {
            rowSum += arr[i][j];
        }
        printf("Sum of element in row %d: %d\n", i + 1, rowSum);
    }

    return 0;
}