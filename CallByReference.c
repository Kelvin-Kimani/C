#include <stdio.h>
/*NOTE: Call by reference uses pointers to get the address in memory of the value*/

//Global variables can be found here
int addition( /*Formal parameters*/ int *a, int *b){
    return *a + *b;
}

void main(){

    //Local variables
    int num1 = 10;
    int num2 = 20;

    int answer = addition(&num1, &num2);
    printf("The sum of %d and %d is %d.\n", num1, num2, answer);
}