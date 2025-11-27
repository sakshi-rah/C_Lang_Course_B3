/* 3) do...while loop: Executes the block at least once, then checks the condition.
initialization
do{
    // code to execute
    // ince or dec;
}while(condition);
*/

#include<stdio.h>

int main(){
    int s=10; // 
    do{
        printf("s:%d\n", s); // s:1, s:2, s:3, s:4, s:5
        s++; // s=2, s=3 , s=4, s=5, s=6
    }while(s<=5);

    return 0;
}