// basic example of a 2d array that calculates the sum of the elements in it
#include <stdio.h>

int main(void)
{
    int arr[2][3];

    printf("Enter 6 numbers:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // add every element in the matrix
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }

    // print the sum
    printf("Sum of the elements of the matrix: %d\n", sum);

    return 0;
}