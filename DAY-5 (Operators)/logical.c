// Logical Operators (&&, ||, !)
// 

#include<stdio.h>

int main(){
printf("----Logical Operators-----\n");
// int a = 1, b = 0;
int a = 0, b = 0;
printf("a && b: %d\n", a&&b); // 0 // 0

printf("a || b: %d\n", a||b); // 1 // 0

printf("!a: %d\n", !a); // 0 // 1

printf("!b: %d\n", !b); // 1 // 1


    return 0;
}