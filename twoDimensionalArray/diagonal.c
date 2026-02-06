// calculate the sum of the main diagonal elements
#include <stdio.h>

int main(void)
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // calculate the sum of main diagonal elements
    int diagonalSum = 0;
    for (int i = 0; i < 3; i++)
    {
        diagonalSum += arr[i][i];
    }

    printf("The sum of diagonal elements: %d\n", diagonalSum);

    return 0;
}