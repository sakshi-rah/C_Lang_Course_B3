// use else if to specify a new condition to test, if the first condition is false.(Apply for Multiple Conditions)
// Syntax of else if ladder (ladder = steps)
/*
    if(condition1){ // f
    code
    }else if (condition2){ //f
    code
    }else if (condition3){
    code
    }else{
    code
    }
*/
#include<stdio.h>
int main(){
    int num = 0;
    if (num<0){ //(7 < 0 => f) // (-33 < 0 => t) // (0 < 0 =>f)
        printf("Number is Negative\n");
    }else if(num == 0){ //( 7== 0 => f) // (0 == 0 => t)
        printf("Number is Zero\n");
    }else{
        printf("Number is Positive\n");
    }

    int marks;
    printf("\nEnter Marks: ");
    scanf("%d", &marks);

    if(marks >= 90 && marks <= 100){
        printf("Very Good!");
    }else if (marks >= 80 && marks <= 100){
        printf("Good!");
    }else if (marks >= 60 && marks <= 100){
        printf("Average!");
    }else if (marks >= 35 && marks <= 100){
        printf("Only Pass!");
    }else if(marks <= 35){
        printf("Fail!");
    }else{
        printf("Invalid!");
    }

    return 0;
}