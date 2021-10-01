#include "Headers/math.h"
#include "Headers/UnionVsStruct.h"

extern const float PIE;

void main(){

    int factorialNumber;
    int fibonacciNumber;
    int circleradius;

    //Factorial
    printf("Enter the number you want to find the factorial for:\n");
    scanf("%d", &factorialNumber);

    printf("The factorial of %d is %d.\n", factorialNumber, factorial(factorialNumber));

    //Fibonacci Sequence
    printf("Enter the number you want to find the fibonacci sequence for:\n");
    scanf("%d", &fibonacciNumber);

    fibonacciSequence(fibonacciNumber);

    //Area and perimeter
    printf("\nEnter radius of circle to get its area and perimeter:\n");
    scanf("%d", &circleradius);

    printf("With PIE being %f; \nThe area of the circle is %f.\nThe perimeter of the circle is %f.\n", PIE, calculateArea(circleradius), calculatePerimeter(circleradius));


    /*Unions vs Structs
    Union only holds one member value at a time WHILE structs holds all the variables declared.*/

    printf("The size of union car is %d.\n", sizeof(cat1));
    printf("The size of struct dog is %d.\n", sizeof(dog1));

    /*Even though both have the same variables, they will have different sizes of memory allocated to them.
    Unions holds one variable at a time, which is the largest variable in size*/
}