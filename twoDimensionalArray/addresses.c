// print the addresses of each of the elements in the array
#include <stdio.h>

int main(void)
{
    // array with 2 rows where each row contains 3 elements (3 columns)
    int arr[2][3] = { 
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; i++) // rows
    {
        for (int j = 0; j < 3; j++) // columns
        {
            printf("%p\n", &arr[i][j]);
        }
    }

    printf("\n");
    printf("%p\n", arr);
    printf("%p\n", arr[0]);
    printf("%p\n", &arr[0][0]);

    printf("\n");
    printf("%p\n", arr[1]);
    printf("%p\n", &arr[1][0]);

    return 0;
}