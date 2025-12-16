#include <stdio.h>
#define DISCOUNT 0.10

int main()
{
    float pitem1, pitem2, pitem3;
    float totbill, finalbill;
    printf("Enter the prices of the items you purchased: ");
    scanf("%f %f %f", &pitem1, &pitem2, &pitem3);
    
    totbill = pitem1 + pitem2 + pitem3;

    if(totbill > 2000 )
    {
        finalbill = totbill - ( DISCOUNT * totbill);
        printf("Congratulations! You received a discount. Your total bill: %.2f\n", finalbill);
    }
    else
    {
        printf("Your total bill: %.2f\n", totbill);
    }

    return 0;
}