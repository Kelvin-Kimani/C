#include <stdio.h>

int main(){

    char name[100];
    int x, y;

    //Prompt for name
    printf("What should I call you?\n");
    scanf("%s", &name);

    //send greetings
    printf("Welcome %s!\n", name);
    printf("Let's do some Math.\n");

    //Prompt for numbers to perfrom operations on
    printf("Enter the first number: \n");
    scanf("%d", &x);

    printf("Enter the second number: \n");
    scanf("%d", &y);

    //Print the result of each mathematical operation.
    printf("The addition of %d and %d is %d\n", x, y, (x+y));
    printf("The subtraction of %d and %d is %d\n", x, y, (x-y));
    printf("The division of %d and %d is %d\n", x, y, (x/y));
    printf("The modulus of %d and %d is %d\n", x, y, (x%y));
    printf("The multiplication of %d and %d is %d\n", x, y, (x*y));

    return 0;
}