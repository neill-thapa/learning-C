// implementing pointer arithmetic to print the array
#include <stdio.h>

int main(void)
{
    int arr[3][3];

    printf("Enter the numbers:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", *(arr + i) + j); // arr decays to the pointer to row 0, arr + i is the address of row i, *(arr + i) is row i itself
        }
    }

    // print
    printf("The array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }

    return 0;
}