#include <stdio.h>

int main(){

    int a[2][2][3] = {
                        /*Array 1*/{{1,2,3}, {4,5,6}},
                        /*Array 2*/{{10,20,30}, {40,50,60}}
                    };


    //Let's try printing the elements of the array(s)
    for (int arrs = 0; arrs < 2; arrs++)
    {
        printf("\nArray %d looks as follows:", arrs+1);
        for (int row = 0; row < 2; row++)
        {
            printf("\nRow %d: ", row+1);
            for (int column = 0; column < 3; column++)
            {
                printf("%d ", a[arrs][row][column]);
            }
            
        }
        
    }
    
    return 0;
}