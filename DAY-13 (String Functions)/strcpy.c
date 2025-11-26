// strcpy() = one string copy in another string
#include<stdio.h>
#include<string.h>

int main(){
    //strcpy(str1, str2); = string copy
    // trcpy(jaha copy krna hai, jise copy krna hai)

    char str1[] = "Good Evening!";
    char str2[20];

    printf("str1: %s\n", str1); // Good Evening!
    // printf("str2: %s\n", str2); 

    strcpy(str2, str1);
    printf("Copied Str2: %s\n", str2); // Good Evening!

}