#include <stdio.h>

int main()
{
    int n;
    printf("What's n?: ");
    scanf("%d", &n);

    int integers[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &integers[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", integers[i]);
    }

    printf("\n");

    return 0;
}