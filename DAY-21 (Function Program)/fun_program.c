// 3. Factorial Number: 5 = 5*4*3*2*1 = 120
// 4. Check Number Even or Odd = HW

// #include<stdio.h>
// 1. Add two numbers using function(getting input from user)
int add(int p, int q){ //passing parameters
    return p+q;

}
int sub(int a, int b){ //passing parameters
    return a-b;

}

int main(){

    int num1, num2, result;
    printf("Enter 1st No: ");
    scanf("%d", &num1);

    printf("Enter 2nd No: ");
    scanf("%d", &num2);

    result = add(num1, num2); // passing Arguments
    printf("Sum of Two Numbers: %d\n",result);

    int x=60, y=30;
    int sub1 = sub(x, y);
    printf("sub: %d\n", sub1);
    return 0;
}

// 2. Check whether a number is prime or not using function
#include<stdio.h>

int isPrime(int num){
    if(num<=1){ // 0, 1 // 3<=1=f // 10<=1=f
        return 0; // not prime
    }

    for(int i=2; i<=num/2; i++){ // 2<=3/2 = 2<=1=f // 2<=10/2, 2<=5=t
        if(num%i==0){ // 10%2==0 = t
            return 0; // not prime
        }
    }
    return 1; // prime
}

int main(){

    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    // Function call for prime number as well as not a prime number
    if(isPrime(number)){
        printf("%d is a Prime Number!\n", number);
    }else{
        printf("%d is not a Prime Number!", number);
    }

    return 0;
}

// 3. Factorial Number: 5! = 5*4*3*2*1 = 120 / 1*2*3*4*5 = 120
#include<stdio.h>

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){ // 1<=5=t, 2<=5=t, 3<=5=t
        fact *= i; // fact = fact*i; fact=1*1=1, 1*2=2, 2*3=6
    }
    return fact;
}


int main(){

    int value = factorial(3);
    printf("Factor of number if %d\n", value);
    return 0;
}