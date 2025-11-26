// strcmp() = compare two string

#include<stdio.h>
#include<string.h>
int main(){
// strcmp(1,2) = string compare

    char fruit1[] = "Orange";
    char fruit2[] = "Orange";

    if(strcmp(fruit1, fruit2) == 0){
        printf("Both Fruits are same!\n");
    }else{
        printf("Both are Different!\n");
    }

    char name1[] = "Vedanti";
    char name2[] = "Neha";

    if(strcmp(name1, name2) == 0){
        printf("Both Name are same!\n");
    }else{
        printf("Both are Different!\n");
    }

    return 0;
}