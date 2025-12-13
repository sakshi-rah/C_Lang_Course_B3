// _________ User Login System Mini Project __________

#include<stdio.h>
#include<string.h>

int main(){

    char userId[25], password[25];
    char loginId[25], loginPass[25];

    printf("\n---***--- Create Your Account ---***---\n");

    printf("Set User ID: ");
    scanf("%s", &userId);

    printf("Set Password: ");
    scanf("%s", &password);

    printf("\n---***--- User Login ---***---\n");

    printf("Enter User ID: ");
    scanf("%s", &loginId);

    printf("Enter User Password: ");
    scanf("%s", &loginPass);

    if(strcmp(userId, loginId) == 0 && strcmp(password, loginPass) == 0 ){
        printf("\nLogin Successful! Welcome on This Site, %s.\n\n", loginId);
    }else{
        printf("\nLogin Failed! Your User ID and Password is Incorrect.\n\n");
    }

    return 0;
}