#include <stdio.h>

int main(){

    int x = 100;

    //Precedence of incremental / decremental matters
    //In the first case, x is assigned to nextX before being incremented.
    int nextX = x++;
    printf("%d\n", nextX);


    int y = 100;

    //In this case, y is assigned to nextY after being incremented.
    int nextY = ++y;
    printf("%d\n", nextY);


    return 0;
}