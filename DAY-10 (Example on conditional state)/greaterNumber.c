//Finding Greater Number using conditional statement

#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter Value of num1 and num2: ");
    scanf("%d%d", &num1, &num2 );

    if(num1>num2){ // (25>56 => f) // (89>40 = t) // (45>56 => f)
        printf("Greater Number is %d\n", num1);
    }else{
        printf("Greater Number is %d\n", num2);
    }

    // Finding Smaller Number
    if(num1<num2){ // (45<56 => t)
        printf("Smaller Number is %d\n", num1);
    }else{
        printf("Smaller Number is %d\n", num2);
    }
    
    // Find Greater Number of give three Number
    int x, y, z;
    printf("Enter Value of x, y & z: ");
    scanf("%d%d%d", &x, &y,&z);

    if(x>y && x>z){ //(9>4 => t && 9>5 => t) // (6>8 => f && 6>2 => t)
        printf("Greater Number is %d\n", x);
    }else if(y>x && y>z){ // (8>2 => t)
        printf("Greater Number is %d\n", y);
    }else{
        printf("Greater Number is %d\n", z);
    }

    return 0;
}

