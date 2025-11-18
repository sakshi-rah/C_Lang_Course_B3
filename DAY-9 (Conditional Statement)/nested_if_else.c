/* Nested if else: A nested if-else statement in C involves placing one if or if-else statement inside 
another if or else block.*/

/*if (condition1) {
    // Code to execute if condition1 is true
    if (condition2) {
        // Code to execute if condition1 and condition2 are true
    } else {
        // Code to execute if condition1 is true and condition2 is false
    }
} else {
    // Code to execute if condition1 is false
    if (condition3) {
        // Code to execute if condition1 is false and condition3 is true
    } else {
        // Code to execute if condition1 is false and condition3 is false
    }
}*/

#include<stdio.h>
int main(){
   // int marks = 250, att = 74;
   // int marks = 550, att = 74;
    int marks = 449, att = 96;
    if(marks >= 350){ //(250 >= 350 => f) // (550 >= 350 =>t) //(449 >= 350 => t)
        if(att >= 75){ // (74 >= 75 => f) // (96 >= 75 => f)
            printf("You are Pass!");
        }else{ // f
            printf("Your Attendance is Low!");
        }
    }else{

        printf("Fail");
    }

    return 0;
}

