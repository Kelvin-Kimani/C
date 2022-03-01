#include <stdio.h>

int main(){
    int noOfElements;
    int swapped, temp; 

    printf("How many numbers do you want to input?\n");
    scanf("%d", &noOfElements);

    int arrayElements[noOfElements];

    printf("Input the numbers\n");

    for (int i = 0; i < noOfElements; i++)
    {
        scanf("%d", arrayElements+i);
    }

    printf("The elements stored are ");
    for (int i = 0; i < noOfElements; i++)
    {
        printf("%d ", arrayElements[i]);
    }

    for (int i = 0; i < noOfElements; i++)
    {
        for (int j = i + 1; j < noOfElements; j++)
        {
            if (arrayElements[i] > arrayElements[j])
            {
                temp = arrayElements[i];
                arrayElements[i] = arrayElements[j];
                arrayElements[j] = temp;
            }
            
        }
        
    }

    printf("\nAfter sorting the array, the elements are ");
    for (int i = 0; i < noOfElements; i++)
    {
        printf("%d ", arrayElements[i]);
    }
}