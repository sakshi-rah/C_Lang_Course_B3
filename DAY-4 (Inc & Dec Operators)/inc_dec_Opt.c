// increment and decrement operators(++, --) inc by 1 or dec by 1
/* pre increment (++x) // write ++ operator before variable
pre decrement (--x) // write -- operator before variable
post increment (x++) // write ++ operator after variable
post decrement(x--) // write -- operator after variable

post inc => print 1st given value then perform operation x=10, (x++: 10) memory= 11, x=11 
pre inc => 1st perform operation then print (++x: 12 ) //x=12
*/

#include<stdio.h>

int main(){
int x = 7;

printf("x: %d\n", x);// x:7

// Post Increment and Decrement Operator
printf("x++: %d\n", x++); // x++: 7 (mem = 8)
printf("x: %d\n", x); // x:8 // checking
printf("x--: %d\n", x--); // x--: 8 (mem = 7)
printf("x: %d\n", x); // x:7

printf("\n\n");

// Pre Increment and Decrement Operator
printf("++x: %d\n", ++x); // ++x: 8 
printf("x: %d\n", x); // x: 8
printf("--x: %d\n", --x); // --x: 7
printf("x: %d\n", x); // x:7


    return 0;
}











































