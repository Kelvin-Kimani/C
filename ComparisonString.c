#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){

    // int iterator = 0;
    char word1[] = "jamesbond";
    // char word2[] = "YOU";
    char word3[100];
    
    /*To lower - long way*/
//     for(iterator = 0; iterator <= strlen(word2); iterator++){
//       if(word2[iterator]>=65&&word2[iterator]<=90)
//          word2[iterator]=word2[iterator]+32;
//    }

   /*To lower - shorter way*/
//    while (word2[iterator])
//    {
//        putchar(tolower(word2[iterator]));
//        iterator++;
//    }

    // puts(strlwr(word2));
   

    // printf("%s\n", word2);

    printf("Enter a string: ");
    scanf("%s", &word3);

    printf("In lower case is - ");
    puts(strlwr(word3));

    int result = strcmp(word3, word1);
    if (result == 0)
    {
        printf("They are the same");
    }
    else{
        printf("Very different");
    }

}