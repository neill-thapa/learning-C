// find the greates common factor
#include <stdio.h>

int gcd(int a, int b);

int main(void) 
{
    int x, y;
    printf("Enter two numbers to find the Greatest Common Divisor:\n");
    scanf("%d %d", &x, &y);

    printf("GCD of %d and %d is %d\n", x, y, gcd(x, y));
    return 0;
}

int gcd(int a, int b) // function to find the greatest common divisor
{
    if (b == 0)  
    {        // base case
        return a;
    }
    else
    {
        return gcd(b, a % b);  // recursive step
    }
}
