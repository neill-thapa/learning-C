// program to find the largest and the smallest element in 2d array
#include <stdio.h>

int main(void)
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) // safety check
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    // declare and populate the array
    int arr[rows][cols];
    printf("Enter the numbers in the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // determine largest and smallest
    int largest = arr[0][0], smallest = arr[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }

            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
            }
        }
    }

    // print the numbers
    printf("The largest number in the array: %d\n", largest);
    printf("The smallest number in the array: %d\n", smallest);

    return 0;
}