#include <stdio.h>

//specifying the length of the array using macro
#define N 4
#define M 5

// Global variables
int arr[N] =  {30, 27, 43, 14};
double d[5] = {1.1,1.2,1.3,1.4,1.5};
char c[6] = {'K', 'i', 'm', 'a', 'n', 'i'};
char ch[] ={[29] = 'L'};

//Designated initialization
int arrNum[M] = {[0] = 1, [4] = 7};


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

    //Get the size of an array
    printf("%d\n", sizeof(arr)/sizeof(arr[0]));


    //Arrays passed through function calls
    printf("%d\n", parseArray(arr));
    printf("%d\n", parseDoubleArray(d));

    //Get elements of char array
    printf("The character elements in C are ");
    for (int i = 0; i < sizeof(c); i++)
    {
        printf("%c, ", c[i]);
    }

    printf("The character elements in ch are ");
    for (int i = 0; i < sizeof(ch)/sizeof(ch[29]); i++)
    {
        printf("%c, ", ch[i]);
    }

    printf("\nThe elements in i are ");
    for (int i = 0; i < M; i++)
    {
        printf("%d, ", arrNum[i]);
    }
    
    return 0;
}