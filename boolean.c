#include <stdio.h>
#include <stdbool.h>

int main(){

    bool kimIsOld = true;

    printf("kimIsOld (0 for false, 1 for true): %d\n", kimIsOld);

    printf("%d\n", kimIsOld + 10);

    //can use _Bool
    _Bool kimIsYoung = 0;
    printf("kimIsYoung (0 for false, 1 for true): %d\n", kimIsYoung);
}