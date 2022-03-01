#include <stdio.h>

/*Note: order of function is important
        Top Down approach is used, therefore the function is declared before calling it.
*/
int addition(int a, int b){
    return a + b;
}

void main(){

    int num1 = 10;
    int num2 = 20;

    int answer = addition(num1, num2);
    printf("The sum of %d and %d is %d.\n", num1, num2, answer);
}

