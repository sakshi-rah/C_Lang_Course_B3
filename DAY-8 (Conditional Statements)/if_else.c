
// Use if to specify a block of code to be executed, if a specified condition is true (if=T)
// Use else to specify a block of code to be executed, if the same condition is false (else=F)

// syntax of if
/*if(condition){
    code
    }*/

// syntax of if-else
/* if(condition){
        code
    }else{
        code
    }*/

#include <stdio.h>
int main()
{
    // We check given number is positive or negative
    int num = 20;
    if (num > 0)
    {                         // true
        printf("Positive\n"); // Positive
    }
    else
    {
        printf("Negative\n"); // false
    }
    printf("\n");

    // Finding Even or Odd Number
    int evenNumber = 67;
    if (evenNumber % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }

    // Finding Number are Equal or Not

    int a = 300;
    if (a == 30)
    {
        printf("\nBoth Number are Equal\n");
    }
    else
    {
        printf("\nNot Equal");
    }

    return 0;
}