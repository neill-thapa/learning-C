// writes 5 integers to a file
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("numbers.txt", "w");
    if (fp == NULL)
    {
        return 1;
    }

    int n;
    printf("How many numbers do you want to store in the array?: ");
    scanf("%d", &n);

    // populate the array
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // write into file in disk from the array in the RAM
    for(int i = 0; i < n; i++)
    {
        fprintf(fp, "%d ", arr[i]);
    }

    fclose(fp);
    return 0;
}