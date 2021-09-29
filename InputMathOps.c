#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main(){

    //declare and initialize all variables to be used
    int comparison;
    int iterator = 0;
    int num1;
    int num2;
    int operator;
    char *operatorName;
    char response[100];
    int result;
    char defaultYes[]="yes";
    char defaultNo[]="no";

    //Ask for the two inputs from the user
    printf("We want to perform a mathematical operation.\nInput the first number:\n");
    scanf("%d", &num1);

    printf("Input second number:\n");
    scanf("%d", &num2);

    //Perform the operations, iteratively.

    do
    {
        printf("Enter any of the following numbers to perform the operation.\n1. Addition(+)\n2. Subtraction(-)\n3. Multiplication(*)\n4. Division(/)\n5. Modulus(%%)\n");
        scanf("%d", &operator);
    
    switch (operator)
            {
                case 1:
                    operatorName="addition";
                   printf("The %s of %d and %d is %d\n", operatorName, num1, num2, (num1+num2));
                    break;

                case 2:
                    operatorName="subtraction";
                    printf("The %s of %d and %d is %d\n", operatorName, num1, num2, (num1-num2));
                    break;
                case 3:
                    operatorName="multiplication";
                    printf("The %s of %d and %d is %d\n", operatorName, num1, num2, (num1*num2));
                    break;
                case 4:
                    operatorName="division";
                    printf("The %s of %d and %d is %d\n", operatorName, num1, num2, (num1/num2));
                    break;
                case 5:
                    operatorName="modulus";
                    printf("The %s of %d and %d is %d\n", operatorName, num1, num2, (num1%num2));
                    break;

                default:
                    printf("Please enter the numbers given.");
                    break;
            }  

            //Prompt user to continue or leave the program
            printf("\nWanna try the operations again?\nEnter \"Yes\" or \"No\" to continue or exit.\n");
            scanf("%s", &response);

            puts(strlwr(response));

            comparison = strcmp(response, defaultYes);

            //Response if the user decides to leave
            if (!strcmp(response, defaultNo))
            {
                printf("Hate to see you leave.");
            }
                

    } while (!comparison);
    

}