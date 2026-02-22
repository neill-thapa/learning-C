// calculate the sum and average of the integers after reading them from the file
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("numbers.txt", "w");
    if (fp == NULL)
    {
        return 1;
    }

    int n;
    printf("How many numbers do you want to enter?: ");
    scanf("%d", &n);
    
    int arr[n]; // create array accordingly

    // first populate the array in the RAM
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // then write the data to the file from RAM
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%d ", arr[i]);
    }

    fclose(fp); // close the file after writing

    fp = fopen("numbers.txt", "r"); // reopen the file in reading mode
    if (fp == NULL)
    {
        return 1;
    }

    // read back the integers from the file
    int x, i = 0, new_arr[n];
    while(i < n && fscanf(fp, "%d", &x) == 1) // returns 1 if fscanf reads integers successfully
    {
        new_arr[i++] = x;
    }

    // calculate the sum and average
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += new_arr[i];
    }

    float average = sum / (float) n;

    printf("The sum of numbers: %d\n", sum);
    printf("The average: %.2f\n", average);

    fclose(fp);
    return 0;
}