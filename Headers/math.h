#include <stdio.h>
const float PIE = 3.142;
//Associated a type(float) with an identifier(f)
typedef float f;

int factorial(signed int num){

    //returns zero if result is negative
    int factorial = 1;

    for (int i = num; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    
    return factorial;
}


int fibonacciSequence(unsigned int term){

    //returns both negative and positive
    int sumOfPreviousTwo;
    int start = 0;
    int next = 1;

    for (int i = start; i <= term; ++i)
    {
         printf("%d, ", start);

         sumOfPreviousTwo = start + next;
         start = next;
         next = sumOfPreviousTwo;
    }

    return start;
    
}

f calculateArea(int radius){
    f area;

    area = PIE * (radius*radius);

    return area;

}


f calculatePerimeter(int radius){
    f perimeter;
    
    perimeter = 2 * PIE * radius;

    return perimeter;
}