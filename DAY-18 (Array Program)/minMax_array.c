#include<stdio.h>

int main(){
    // first consider min number of arr[0] index.

    // Minimum Number Finding from Given Array
    int  arr[] = {850, 698, 3205, 560, 7456, 2056, 8990};

    int min = arr[0]; // min=85
    for(int i=0; i<7; i++){
        if(arr[i] < min){ // 69<85=t, 32<69=t, 56<32=f, 74<32=f
            min = arr[i]; // min=69, min=32 
        }
    }
    printf("Minimum Number: %d\n", min);

     // Maximum Number Finding from Given Array

    int max = arr[0]; 
    for(int i=0; i<7; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum Number: %d\n", max);

    return 0;
}