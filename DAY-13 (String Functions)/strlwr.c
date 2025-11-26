//strlwr() = string lowercase ("ghjdfghbn");

#include<stdio.h>
#include<string.h>

void main(){
    // strlwr() and strupr() == tolower() and toupper() = ctype.h

    char fullName[] = "MUKESH Pimpalkar";
    strlwr(fullName);
    printf("Lowercase Full Name: %s\n", fullName); // 

    strupr(fullName);
    printf("Uppercase Full Nmae: %s\n", fullName);

    

}