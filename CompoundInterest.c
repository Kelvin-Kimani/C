#include <stdio.h>

int main(){

    /*Values*/
    double deposit;
    double interestRate;
    int years;
    double interest = 1;
    double interestSum = 0;
    double balance = 0;


    /*Prompt user for the input*/
    printf("Welcome to Compund calculator.\nLet's calculate the interest rate for you, with a break down for each year.\n");
    printf("Enter deposit amount:\n");

    scanf("%lf", &deposit);

    printf("How long would you wish to invest?(in years)\n");

    scanf("%d", &years);

    printf("Enter interest rate:\n");

    scanf("%lf", &interestRate);


    /*Calculate interest and balance using loop*/
    printf("Year\tInterest\tBalance\n");
    for (int i = 1; i <= years; i++)
    {
        interest = deposit / interestRate;

        /*Change deposit(Add upon deposit to get compound interest), also will be the balance in the account*/
        deposit += interest;

        /*Get interest summation*/
        interestSum += interest;

        printf("%d\t%.2lf\t%.2lf\n", i, interest, deposit);
    }
    
    printf("The compounded interest for %d years is %.2lf\n", years, interestSum);
    printf("The balance in the account after %d years at %.2lf percent interest is Kshs. %.2lf", years, interestRate, deposit);
    return 0;
    
}