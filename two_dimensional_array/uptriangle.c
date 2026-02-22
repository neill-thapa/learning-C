// check if the matrix is uppertriangular or not
#include <stdio.h>

int main(void)
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols)
    {
        printf("Invalid size! Rows and columns number should be equal...\n");
        return 1;
    }

    // populate the matrix
    int arr[rows][cols];

    printf("Enter the number of rows and columns:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // print the matrix
    printf("The matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");s
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++) // check only the lower half of main diagonal
        {
            if (arr[i][j] != 0)
            {
                printf("The matrix is not upper triangular.\n");
                return 0;
            }
        }
    }

    printf("The matrix is upper triangular.\n");

    return 0;
}