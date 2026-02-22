// swap using pointers
#include <stdio.h>

void swap(int *int1, int *int2);

int main(void)
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    // before swapping
    printf("Before swapping:\n");
    printf("a: %d, b: %d\n", a, b);

    swap(&a, &b); // passing values by reference

    // after swapping
    printf("After swapping:\n");
    printf("a: %d, b: %d\n", a, b);

    return 0;
}

void swap(int *int1, int *int2)
{
    int temp;
    temp = *int1;
    *int1 = *int2;
    *int2 = temp;
}