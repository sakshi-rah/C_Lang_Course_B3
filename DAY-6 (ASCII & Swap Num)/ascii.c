// ASCII Value (A to Z OR a to z) keyboards = 127 keys
// A = 65; a = 97; // difference = 32
// a = 97 - 32 = 65 = A
// b = 98 - 32 = 66 = B 
// 32 = space, 33 = !
// A = 65 to Z = 90
// a = 97 to z = 122
#include<stdio.h>

int main(){
char name = 'A';
printf("ACSII Value of A is %d\n", name); // 65

char character = 'z';
printf("ACSII Value of z is %d\n", character); // 122

char name1 = 'S';
printf("ACSII Value of S is %d\n", name1); // 115-32 = 83

int num = 75;
printf("ACSII Value of num is %c", num);

    return 0;
}

