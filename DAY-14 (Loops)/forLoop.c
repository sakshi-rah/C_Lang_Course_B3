/* Loops: In C programming, loops are used to execute a block of code repeatedly as 
long as a given condition is true. 

1) for loop: Used when the number of iterations is known.

Syntax of for loop: 
for(initialization; condition; increment/decrement){
    // code to execute
}
*/
#include<stdio.h>

int main(){

    // Print 1 to 10 Numbers Program using for loop

    // for(int i=1; i<=3; i++){ // (1<=3 = t, i=2, 2<=3 = t, i=3, 3<=3 = t, i=4)
    //     printf("i:%d\n", i); // i:1, i:2, i:3
    // }

    // Finding the Number is Even or Odd
    int n;
    printf("Enter Value of n: ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++){
        if(i%2==0){
            printf("Even: %d\n", i);
        }else{
            printf("Odd: %d\n", i);
        }
    }

    // Using Continue(skip) and Break(end) Keyword 
    for(int i=1; i<=10; i++){
        if(i==6){
            // continue;
            break;
        }
        printf("i: %d\n", i);
    }

    return 0;
}
