// program to print the transpose of the matrix
#include <stdio.h>

int main(void)
{
    int arr[4][3];

    // take input
    printf("Enter the numbers:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // print the initial matrix
    printf("Initial matrx:\n");
    for (int i = 0; i < 4; i++) // row
    {
        for (int j = 0; j < 3; j++) // column
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // print the transpose of the matrix
    printf("Transpose of the matrix:\n");
    for (int j = 0; j < 3; j++) // column 
    {
        for (int i = 0; i < 4; i++) // row
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

