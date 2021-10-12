#include <stdio.h>
#define L 9

int main(){

    int arr[L] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
    int revArr[L];
    int x = L;

    //Print out array first
    printf("Elements of the array are: ");
    for (int i = 0; i < L; i++)
    {
        printf("%d, ", arr[i]);
    }


    //Reverse array
    for (int i = 0; i < L; i++)
    {
        x--;
        revArr[x] = arr[i];
       
    }

    printf("\nThe elements of the reversed array are ");
    for (int i = 0; i < L; i++)
    {
        
        printf("%d, ", revArr[i]);
    }
    
    
    return 0;
}