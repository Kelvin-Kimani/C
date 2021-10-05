#include <stdio.h>

// Global variables
int arr[4] =  {1, 2, 3, 4};
double d[5] = {1.1,1.2,1.3,1.4,1.5};
char c[6] = {'K', 'i', 'm', 'a', 'n', 'i'};

int parseArray(int anyArr[]){

    printf("The array arr has elements ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d, ", anyArr[i]);
    }

    return 0;

}

double parseDoubleArray(double anyArr[]){

    printf("The array d has elements ");
    for (int i = 0; i < 5; i++)
    {
        printf("%f, ", anyArr[i]);
    }

    return 0.000000;

}

int main(){

    //Arrays passed through function calls
    printf("%d\n", parseArray(arr));
    printf("%d\n", parseDoubleArray(d));

    //Get elements of char array
    printf("The character elements in C are ");
    for (int i = 0; i < sizeof(c); i++)
    {
        printf("%c, ", c[i]);
    }
    
    return 0;
}