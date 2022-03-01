#include <stdio.h>

int square(int number){
    return number * number;
}

int squareroot(int number){
    if (number == 0 || number == 1)
    {
        return number;
    }

    long start = 1, end = number, ans = 0;
    
    while (start <= end)
    {
        int mid = (start + end)/2;

        if (mid*mid == number)
        {
            return (int)mid;
        }

        if (mid*mid < number)
        {
            start = mid + 1;
            ans = mid;
        }
        
        else{
            end = mid - 1;
        }
        
    }

     return (int)ans;    
}

int cuberoot(int number){
    if (number == 0 || number == 1)
    {
        return number;
    }

    long start = 1, end = number, ans;

    while (start <= end)
    {
        //Get the halfway point
        int mid = (start + end)/2;

        //Perfect Cuberoot
        if (mid*mid*mid == number)
        {
            return (int)mid;
        }

        if (mid*mid*mid < number)
        {
            start = mid + 1;
            ans = mid;
        }
        else
            end = mid - 1;
        
    }
    return (int)ans;

}

int main(){

    int number;

    printf("Enter number to do calculations\n");
    scanf("%d", &number);

    printf("%d squared is %d\n", number, square(number));
    printf("The square root of %d is %d\n", number, squareroot(number));
    printf("The cube root of %d is %d", number, cuberoot(number));

}