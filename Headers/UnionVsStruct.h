/*Both union and structs are used for grouping different types of data under a single name
*/
#include <stdbool.h>
union cat
{
    char name[20];
    bool meows;
    bool areTheyEnemiesWithDogs;
    int age;

}cat1;

struct dog
{
    char name[20];
    bool barks;
    bool areTheyEnemiesWithCats;
    int age;
}dog1;

