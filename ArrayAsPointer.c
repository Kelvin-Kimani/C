#include <stdio.h>

int main(){

    /*NOTE: An array is a pointer to itself, and points to the address of the first element(index 0)*/
    int a[5]={[0] = 50, [4] = 100};
    int sum = 0, *p;

    printf("The sum of the elements of the array is: ");
    for (p = a; p <= a + 4; p++)
    {
        /* *p is a dereference operator, hence gets the value of the address stored by the pointer*/
        sum+=*p;
    }
     printf("%d", sum);
    
    return 0;
}