/*
Defination:  A pointer is a variable that stores the address of another variable.
 *variable_name = for create pointer , &variable_name = for denoted address.

Syntax: data_type *variable_name;
Example:
int x=10; // variable declaration
int *ptr; // Pointer declaration
ptr = &x; // stored address of x variable

*/

#include <stdio.h>

int main()
{
    int a = 40;
    int *ptr;
    ptr = &a;

    printf("Value of a: %d\n", a); // 40
    printf("Address of a: %p\n", &a); // 0061FF18
    printf("Address stored in ptr variable: %p\n", ptr); // 0061FF18
    printf("Value of ptr variable: %d\n\n", *ptr); // 40

    // Changing Value using pointer variable
    int x = 10;
    int *p = &x;
    printf("Value of x: %d\n", x); // x=10
    printf("Value of p: %d\n", *p); // p=10

    *p = 20;
    printf("Address of x: %p\n", &x); // 0061FF10
    printf("Value of x: %d\n", x); // x = 20
    printf("Value of p: %d\n\n", *p); // p = 20

    // Array of Pointer OR Pointer in array:
    int arr[5] = {30, 60, 90, 120, 150};
    int *arPtr = &arr; // &arr[0], &arr[1], &arr[2]

    for(int i=0; i<5; i++){
        printf("Value at arr[%d]: %d\n", i, *(arPtr+i));
    }


    return 0;
}