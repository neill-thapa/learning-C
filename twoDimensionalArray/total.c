// this program calculates the total sum of the elements in the array
#include <stdio.h>

int main(void)
{
    int arr[4][2];
    int sum = 0;

    // populate the array, calculate the sum of elements
    printf("Enter 8 numbers:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    // print sum
    printf("The sum of elements: %d\n", sum);

    return 0;
}