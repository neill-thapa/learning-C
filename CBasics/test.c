#include<stdio.h>

#define MAX(a, b) (a > b ? a : b)

int main () 
{
    printf("The max between two nbrs: %d\n", MAX(3, 6));
    printf("The max between two nbrs: %d\n", MAX(10, 6));
    printf("The max between two nbrs: %d\n", MAX(3, 12));
    
    return 0;
}