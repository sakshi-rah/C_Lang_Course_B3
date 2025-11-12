//  1. Arithmetic operators (+,-,*,/,%)
// ** 2. Increment Decrement Operators(++,--)
//  3. Assignment operators (=,+=,-=,*=,/=,%=)
//  4. Relational Operators (<,<=,>,>=,==,!=)
//  5. Logical operators (&&,||,!)

// Aritmetic Operators Program:-
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Value Of a & b:");
    scanf("%d%d", &a, &b);

    printf("a+b: %d\n", a + b); // a+b: 50
    int sum = a + b;
    printf("Sum of a & b is %d\n\n", sum);

    printf("a-b: %d\n", a - b); // a-b: -10
    int sub = a - b;            // 20-30 = -10
    printf("Sub a & b is %d\n\n", sub);

    printf("a*b: %d\n", a * b); // a*b: 600
    int multi = a * b;          // 20*30 = 600
    printf("Multi a & b is %d\n\n", multi);

    printf("a%%b: %d\n", a % b); // a%b: 20
    int mod = (a % b);             // 10%3
    printf("Mod a & b is %d\n\n", mod);

    printf("a/b: %f\n", (float)a/b);
    float div = (float)a/b; // type casting (int- float) 
    printf("Div a & b is %.2f\n", div);

    return 0;
}