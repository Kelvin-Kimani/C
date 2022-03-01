#include <stdio.h>
#include <math.h>

int main(){
    
    double base;
    double height;
    double hypotenuse;
    
    printf("Let's calculate the hypotenuse of any triangle\n");
    printf("Enter the length of the base\n");
    scanf("%lf", &base);

    printf("Enter the length of the height\n");
    scanf("%lf", &height);
    
    //Calculate hypotenuse from the two inputs
    //a2 + b2 = c2

    hypotenuse = sqrt(base*base + height*height);
    printf("The hypotenuse of triangle with base %f and height %f is %f.", base, height, hypotenuse);

    return 0;
}