#include <stdio.h>

int main()
{

    printf("Right angle triangle Pattern Program: \n");

    int i, j;                // i = row, j = col
    for (i = 1; i <= 3; i++) // (2<=3 => t)
    {
        for (j = 1; j <= i; j++) // (1<=1 => t, j=2, 2<=1=> f) // (1<=2=> t, j=2, 2<=2 => t, j=3, 3<=2=> f)
        {
            printf("* "); // *
                          //  * *
                          //  * * *
        }
        printf("\n");
    }

    /*
    Outer loop (i) runs from 1 to 5 → control number of rows.
    Inner loop (j) runs from 1 to i → control number of * printed in each row.
    So row 1 has 1 star, row 2 has 2, ..., row 5 has 5  star.

    *
    * *
    * * *
    * * * *
    * * * * *
*/


printf("\nRight angle triangle in Number Pattern Program\n");
    int a, b; // a=row, b= col

    for (a = 1; a <= 5; a++)
    {
        for (b = 1; b <= a; b++)
        {
            printf("%d ", b);
        }
        printf("\n");
    }

    /*
    Similar structure to the star triangle.
    But instead of printing "s ", it prints the value of s.
    So each row prints increasing numbers starting from 1.
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */

printf("\nReverse Right angle triangle in Number Pattern Program\n");
    int a1, b2; // a=row, b= col

    for (a1 = 5; a1 >= 1; a1--)
    {
        for (b2 = 1; b2 <= a1; b2++)
        {
            printf("%d ", b2);
        }
        printf("\n");
    }


/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
printf("\nSquare star Pattern Program\n");
int x, y;
for(x=1; x<=5; x++){
    for(y=1; y<=10; y++){
        printf("* ");
    }
    printf("\n");
}


/* 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/
    return 0;
}