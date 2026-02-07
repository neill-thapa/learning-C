// checks whether a matrix is symmetric or not
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

    if (rows != cols)
    {
        printf("The matrix can't be symmetric with different rows and columns.\n");
    }
    else
    {
        int arr[rows][cols];

        // populate the array
        printf("Enter the numbers in the matrix:\n");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                printf("arr[%d][%d]: ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }

        // check for symmetry
        for (int i = 0; i < rows; i++)
        {
            for (int j = i + 1; j < cols; j++) // check elements once
            {
                if (arr[i][j] != arr[j][i])
                {
                    printf("The matrix is not symmetric.\n");
                    return 0;
                }
            }
        }
        printf("The matrix is symmetric.\n");
    }

    return 0;
}