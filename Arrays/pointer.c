// Pointer basics
#include <stdio.h>

int main(void)
{
    int number = 10;
    int *ptr = &number;

    printf("Value: %d\nAddress of number: %p\n", number, ptr);
    printf("Address of ptr itself: %p\n", &ptr);

    return 0;
}