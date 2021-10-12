#include <stdio.h>

int main(){
    
    int number;
    int size;
    int max;
    int min;

    printf("Hi. Let's create an array to get the max and min numbers in it.\n");
    printf("How many array elements do you want?\n");
    scanf("%d", &size);

    int a[size];
    
    printf("Please enter the %d elements below\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &number);
        a[i] = number;
        printf("%d inserted!\n", number);
    }
    
    //get max and min
    max = min = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }

        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("The max and min numbers in the array are %d and %d respectively.", max, min);
    
    return 0;
}