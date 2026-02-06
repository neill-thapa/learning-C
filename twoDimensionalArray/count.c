// program to count even and odd numbers in the matrix
#include <stdio.h>

int main(void)
{
    int arr[4][3];
    int countEven = 0, countOdd = 0;

    // take input
    printf("Enter the numbers:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
            
            // determine if the number is odd or even and update count variable
            if (arr[i][j] % 2 == 0)
            {
                countEven++;
            }
            else
            {
                countOdd++;
            }
        }
    }

    // print
    printf("The number of Even Numbers in the matrix: %d\n", countEven);
    printf("The number of Odd Numbers in the matrix: %d\n", countOdd);

    return 0;
}