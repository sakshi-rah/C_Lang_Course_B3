/*
Function(): A function in C is a small block of code that is written to do one specific work.
Instead of writing the same code again and again, we write it once inside a function
and use it many times.

return type:
1) int = return something integer value(0).
2) void = no need to return anything.

Types of Function:
1) Predefine Function(): printf(), scanf(), strlen()
2) User Defined Function():
    Syntax of Function():
    return_type function_name(Aug list){ // Write Outside of the main function
    code; // int, void
    }

    call the function:
    function_name(aug list); => in main function

** Category of user defined function:*

1.Function with no aug and no return value 
2.Function with aug and no return value
3.Function with no aug and return value
4.Function with aug and return value

*/

#include <stdio.h>
// user defined function
// void printState()
// {
//     printf("Hello Function!\n");
// }

// 1. Function with no aug and no return value
// void marks(){
//     printf("Category one: New Topic!\n");
//     printf("It's for Demo Purpose!\n");
// }

// 2. Function with aug and no return value
// void sum(int a, int b){ // declaration time = parameters
//     int sum = a + b;
//     printf("Sum of a & b is %d\n", sum);
// }

// 3. Function with no aug and with return value
// int getNum(){
//     int num;
//     printf("Enter Number: ");
//     scanf("%d", &num);
//     return num;
// }

// 4. Function with aug and with return value
int multiNum(int x, int y){
    int multi = x*y;
    return multi;
}

int main()
{
    // call the function
    // printState();
    // marks();

    // sum(2, 4);
    // sum(12, 30);
    // sum(50, 56);

    // int value = getNum();
    // printf("Number is %d\n", getNum());
    // // printf("Number: %d\n", value);

    int result = multiNum(20, 4); // calling the function with aug => Aurguments
    printf("Multification of x, y is %d\n", result);
    printf("Multification of x, y is %d\n", multiNum(50, 2));


    return 0;
}

