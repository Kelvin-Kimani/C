#include <stdio.h>
#define N 5

int main(){

    int a[N][N] = {{8,3,9,0,10},
                    {3,5,17,1,1},
                    {2,8,6,23,1},
                    {15,7,3,2,9},
                    {6,14,2,6,0}};
    int rowSum = 0;
    int columnsum = 0;

    for (int row = 0; row < N; row++)
    {

        for (int column = 0; column < N; column++)
        {
            //Calculate row sum here
            rowSum += a[row][column];
        }      
        
        printf("Sum of row %d is %d.\n", row+1, rowSum);
        rowSum = 0;
    }

    //Calculate column sum here
    for (int column = 0; column < N; column++)
        {

            for (int row = 0; row < N; row++)
            {
                 columnsum += a[row][column];
            }
            
          printf("Sum of column %d is %d.\n", column+1, columnsum);
          columnsum = 0;
                  
    }
        
    return 0;
}