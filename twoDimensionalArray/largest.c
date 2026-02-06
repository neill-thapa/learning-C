// find the largest element 
#include <stdio.h>

int main(void)
{
    int arr[3][3];

    // take input
    printf("Enter 9 numbers:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // find the largest
    int largest = arr[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }

    // print the largest
    printf("The largest number in the array: %d\n", largest);

    return 0;
}