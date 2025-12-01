// Syntax of Enum: enum keyword
/*
enum variable_name {value1, value2, value3.....};
Enum: Groups name constants(integers)
*/

#include<stdio.h>

enum Day {Sun, Mon, Tue, Wed, Thur, Fri, Sat};

enum Signal {Red, Yellow, Green};

void main(){
    enum Day today = Fri;
    printf("Today is %d\n", today);
    
    enum Signal S = Green;
    
    if(S==Green){
        printf("Go!\n");
    }else if(S==Yellow){
        printf("Go Slow!\n");
    }else{
        printf("Stop!\n");
    }

}