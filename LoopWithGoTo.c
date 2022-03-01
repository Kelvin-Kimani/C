#include <stdio.h>

void main(){
    int x = 0;

    //Loop without for loop
    L:
        if (x<=10)
        {
            printf("%d\n", x);
            x++;
            goto L;
        }

    printf("Exited the \"loop\" :)");        
}