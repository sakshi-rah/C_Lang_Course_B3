// Conditional/Ternary Operator(if-else)

#include<stdio.h>

int main(){
    // Syntax: condition ? expression1 : expression2;
    // expre1 = T, expre2 = F

    // Finding the Number is Ever or Odd
    int marks = 80;
    (marks % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    // Finding Greater Number
    int s = 350, r = 68;
    int result = (s>r)? s : r; // (35>68) = F => Expression2 Run = r => r = 68
    printf("Greater Number is %d\n", result); // 350

    // Finding Smaller Number
    int a = 100, b = 30;
    int output = (a<b)? a : b; // (10<30) = T => Expression1 Run = a => a = 10
    printf("Smaller Number is %d\n", output); // 10


    return 0;
}