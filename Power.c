#include <stdio.h>

int getPower(int number, int power){
    int result = 1;

    for (int i = 0; i < power; i++)
    {
        result *= number;
    }
    
    return result;
}
int main(){
    int number, power;

    printf("Enter number: \n");
    scanf("%d", &number);

    printf("Enter power: \n");
    scanf("%d", &power);

    printf("%d power %d is %d.", number, power, getPower(number, power));
}