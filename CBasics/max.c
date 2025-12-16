#include <stdio.h>
#define MAX(a, b) ((a)> (b) ? (a) : (b))

int main() 
{
    int num1, num2, num3;
    printf("Enter the numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if(MAX(num1, num2) > num3)
    {
        printf("%d is the largest.", MAX(num1, num2));
    }
    else
    {
        printf("%d is the largest.", num3);
    }

    return 0;
}