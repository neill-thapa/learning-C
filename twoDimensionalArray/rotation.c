// rotates the matrix 90 degree clockwise
#include <stdio.h>

int main(void)
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    int arr[rows][cols];

    // populate the matrix or 2d array
    printf("Enter the numbers in the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // print the original matrix
    printf("Original matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    // print the rotated matrix
    printf("After 90 degree clockwise rotation:\n");
    for (int j = 0; j < cols; j++)
    {
        for (int i = rows - 1; i >= 0; i--)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}