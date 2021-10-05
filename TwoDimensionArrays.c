#include <stdio.h>

//Arranged how they are to be displayed - in rows and columns
int gradesMarks[4][3]={{100, 90, 80},
                        {70, 60, 50},
                        {40, 30, 20},
                        {10, 0, 0}};

//Here we are requesting 5 names(rows) of at most 10 characters(columns)
char names[5][10]={
                    "JayJay",
                    "Fedora",
                    "Umbwedede",
                    "Eden",
                    "Zikki"
};

int main(){

    //Nested loop
    //Row
    for (int row = 0; row < 4; row++)
    {
        printf("The grades that rank %d are: ", row+1);

        //Column
        for (int column = 0; column < 3; column++)
        {
            printf("%d ", gradesMarks[row][column]);
        }
        
        printf("\n");
    }

    //Get the names
    printf("The following students to follow me: ");
    for (int namesIndex = 0; namesIndex < 5; namesIndex++)
    {
        printf("%s, ", names[namesIndex]);
    }
    
    
    return 0;
}