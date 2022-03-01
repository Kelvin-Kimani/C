#include <stdio.h>

void main(){
    //Typecasting
    int eggs;
    printf("How many eggs do you have today? \n");
    scanf("%d", &eggs);

    //Calculate how many dozens there are
    //double dozen = eggs / 12; - This has output of only whole numbers, with padded zeros as operation of integer and integer is an integer.
    //We need to type cast
    double dozen = (double) eggs / 12;
    printf("You have %f dozens of eggs.", dozen);
}