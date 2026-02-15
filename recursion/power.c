// power of a function using recursion (x ^ n)
#include <stdio.h>

int power(int number, int pwr_to_nbr);

int main(void)
{
    int number;
    printf("Number?: ");
    scanf("%d", &number);

    int pwr;
    printf("Power to the number?: ");
    scanf("%d", &pwr);

    int result = power(number, pwr);

    printf("%d ^ %d is %d\n", number, pwr, result);

    return 0;
}

int power(int number, int pwr_to_nbr)
{
    if (pwr_to_nbr == 0) // base case
    {
        return 1;
    }
    else
    {
        return number * power(number, pwr_to_nbr - 1); // recursive call
    }
}