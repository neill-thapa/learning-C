// find the fibonacci series
#include <stdio.h>

int fibo(int n);

int main(void)
{
    int n;
    printf("Fibonacci series upto?: ");
    scanf("%d", &n);

    printf("Fibonacci series upto %d terms:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }
    printf("\n");

    return 0;
}

int fibo(int n)
{
    // base cases
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    // recursive case
    return fibo(n - 1) + fibo(n - 2);
}