// strrev() = string Reverse

#include<stdio.h>
#include<string.h>

void main(){
    char name[] = "Tanmay Mohod";
    strrev(name);
    printf("Reverse String: %s\n", name);

    // Find String length without using string handling function strlen()
    char greeting[] = "Good Evening How are you!";

    int len = 0;
    for(int i=0; greeting[i]!='\0'; i++){
        len++;
    }

    printf("Length of Greeting String is %d\n", len);

    // find  string reverse without using strrev() function 

    for(int i = len-1; i>=0; i--){
        printf("%c", greeting[i]);
    }


}