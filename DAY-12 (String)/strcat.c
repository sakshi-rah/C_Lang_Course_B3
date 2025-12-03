//strcat() = two string join
#include<stdio.h>
#include<string.h>

int main(){
// 2. String Concatenate strcat(); = Join Two String
    char F_Name[20];
    printf("Enter First Name: ");
    scanf("%s", &F_Name); // Anand
    char L_Name[20];
    printf("Enter Last Name: ");
    scanf("%s", &L_Name); // Borkar

    printf("First Name: %s\n", F_Name); // Anand
    printf("Last Name: %s\n", L_Name); // Borkar
    strcat(F_Name, " ");
    strcat(F_Name, L_Name); // (Anand Borkar)
    printf("Full Name : %s\n", F_Name); // (Anand Borkar)   

    // strcat(L_Name, " ");
    // strcat(L_Name, F_Name); // (BorkarAnand)
    // printf("Concatenate String: %s\n", L_Name); // BorkarAnand

    return 0;
}