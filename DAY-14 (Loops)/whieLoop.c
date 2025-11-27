/* 2) while loop: Used when the number of iterations is not known.
//initialization;
while(condition){
    // code to execute
    //increment;
} */

#include<stdio.h>

int main(){
    int i=1;
    while(i<=5){
        printf("%d ", i);
        i++;
    }

    printf("\n");

    // Printing Reverce Number:
    int j=5;
    while(j>=1){
        printf("%d ", j);
        j--;
    }

    //Taking Input From User
    int a=1, n;
    printf("Enter Value of n: ");
    scanf("%d", &n);

    while(a<=n){
        printf("a: %d\n", a);
        a++;
    }

    return 0;
}