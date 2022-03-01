#include <stdio.h>

int main(){
    
    int max;
    int startMax = 1, min = 1;

    printf("Enter number of rows: \n");
    scanf("%d", &max);

    do
    {
        do
        {        
            printf("*");
            min++;
        } while (min < startMax + 1);
        
        printf("\n");
        min = 1;
        startMax++;
    } while (startMax < max);


    int ans = 13/2;
    printf("%d", ans);
    
}