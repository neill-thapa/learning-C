#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main()
{
    int number, square;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    square = SQUARE(number);

    printf("The square of %d: %d\n", number, square);

    return 0;
}
