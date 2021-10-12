#include <stdio.h>

int main(){

    int x =5;
    int *p, *q;

    p = &x;
    printf("Address of x: %p.\n", &x);
    printf("Address of *p: %p.\n", &p);
    printf("Address of x stored in p: %p.\n", p);

    printf("Value at x: %d.\n", *p);

    //change value at x
    *p = 19;
    printf("New value at x: %d.\n", *p);
    
    /*Not the same as *q=*p
      This tries to assign value of variable pointed by p to variable pointed by q*/
    q=p;
    printf("Address of q is %p\n", &q);
    printf("Address of x stored in q: %p.\n", q);
   
    return 0;   
}