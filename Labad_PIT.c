#include <stdio.h>

int main()
{
    printf("Name: Frederik M. Labad\n");
    printf("ID Number: 2025306682\n");
    printf("-------------------------\n");
    
    int x;
    int y;
    
    printf("Enter the 1st number: ");
    scanf("%d", &x);
    printf("Enter the 2nd number: ");
    scanf("%d", &y);
    printf("-------------------------\n");
    
    int addition = x + y;
    int subtraction = x - y;
    int multiplication = x * y;
    int division = x / y;
    
    printf("The sum of %d and %d is: %d \n", x,y, addition);
    printf("The difference of %d and %d is: %d \n", x,y, subtraction);
    printf("The product of %d and %d is: %d \n", x,y, multiplication);
    printf("The quotient of %d and %d is: %d", x,y, division);
    

    return 0;
}