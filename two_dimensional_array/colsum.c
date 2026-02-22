#include <stdio.h>

int main(void)
{
    // declare and initialize the array
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int j = 0; j < 3; j++) // column because outer loop remains fixed until inner loop is finished
    {
        int colSum = 0;
        for (int i = 0; i < 3; i++) // rows because inner loop changes
        {
            colSum += arr[i][j];
        }
        printf("Sum of Column %d: %d\n", j + 1, colSum);
    }

    return 0;
}