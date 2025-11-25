
// Array of Characters:
/* A string is essentially a sequence of individual char data types stored 
    contiguously in memory, just like any other array.
    * Null Termination:
    The crucial element that defines a C string is the null character (\0). 
    This special character signifies the end of the string.

    -for string we use %s.

    syntax of string :
    datatype string_name [size of str] = "string";

    string = hello
*/
#include<stdio.h>
int main(){
    char str1 [20];
    printf("Enter Value of str1: ");
    scanf("%s", &str1);
    printf("String1 is : %s\n", str1);

    // Print Sentences 
    char str2 [20];
    printf("Enter Value of str2: ");
    scanf("%[^\n]s", &str2); // "%[^\n]s"
    printf("String2 is : %s\n", str2);

    char str3 [ ] = {"Hello Class! How are you"};
    printf("String3 is: %s\n", str3);
    
    return 0;
}