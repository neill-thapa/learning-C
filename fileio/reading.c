// read and print the data from the file numbers.txt
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL)
    {
        return 1;
    }

    int n;
    printf("How many numbers did you entered?: ");
    scanf("%d", &n);

    int arr[n];

    int x, i = 0;
    while (i < n && fscanf(fp, "%d", &x) == 1) // returns 1 if it successfully reads an integer, so the condition is true while fscanf reads successfully
    {
        arr[i++] = x;
    }

    // print the array to the terminal
    printf("You entered:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    fclose(fp);
    return 0;
}