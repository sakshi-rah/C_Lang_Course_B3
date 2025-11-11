// increment and decrement operators(++, --) inc by 1 or dec by 1
/* pre increment (++x) // write ++ operator before variable
pre decrement (--x) // write -- operator before variable
post increment (x++) // write ++ operator after variable
post decrement(x--) // write -- operator after variable

post => print 1st givenvalue then perform operation (x++: 10) memory= 11
pre => 1st perform operation then print (++x: 12 )
*/

#include<stdio.h>

int main(){
int x = 7;

printf("x: %d\n", x);// x:7

// Post Increment and Decrement Operator
printf("x++: %d\n", x++); // x++: 7 (m = 8)
printf("x: %d\n", x); // x:8 // checking
printf("x--: %d\n", x--); // x--: 8 (m = 7)
printf("x: %d\n", x); // x:7

printf("\n\n");

// Pre Increment and Decrement Operator
printf("++x: %d\n", ++x); // ++x: 8 
printf("x: %d\n", x); // x: 8
printf("--x: %d\n", --x); // --x: 7
printf("x: %d\n", x); // x:7



    return 0;
}











































// Logical operators (&&,||,!)
    // && = and = 1 1 = 1, 0 1= 0, 1 0 = 0, 0 0 = 0; (both conditions are true)
    // || = or = 1 1 = 1, 0 1 = 1, 1 0 = 1, 0 0 = 0; (any one condition is true)
    // ! = not =  1 = 0, 0 = 1