// find whether the matrix is identity or not
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
        printf("The matrix is not an identity matrix.\n");
    }
    else
    {
        // populate the array
        int arr[rows][cols];

        printf("Enter the numbers:\n");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                printf("arr[%d][%d]: ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }

        // check if the matrix is identity or not
        int isIdentity = 1;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if ((i == j && arr[i][j] != 1) || (i != j && arr[i][j] != 0))// if position is diagonal AND the value is not 1, then not an identity OR 
                                                                             // if position is not diagonal AND the value is not zero, then not an identity
                {
                    isIdentity = 0;
                    break;
                }
            }
            if (!isIdentity)
            {
                break;
            }
        }

        if (isIdentity)
        {
            printf("The matrix is an identity matrix.\n");
        }
        else
        {
            printf("The matrix is not an identity matrix.\n");
        }
    }

    return 0;
}