#include <stdio.h>
#define GREET "Welcome to C Programming,"

int main()
{
    char name[100];
    printf("Enter your first name only: ");
    scanf("%s", name);

    int roll_no;
    printf("Enter your roll no.: ");
    scanf("%d", &roll_no);

    printf("%s %s!\nYour roll number is %d.\n", GREET, name, roll_no);

    return 0;

}
