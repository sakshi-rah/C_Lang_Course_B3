#include <stdio.h>
// Swapping Numbers using third variable
int main()
{
    int a = 10, b = 40;
    printf("a: %d, b: %d\n", a, b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d\n", a, b);

// Swapping Numbers without using third variable
    int p = 15, q = 5;
    printf("\nP: %d, Q: %d\n", p, q);
    p = p + q; // p = 15+5 = 20
    q = p - q; // q = 20-5 = 15
    p = p - q; // p = 20-15 = 5
    printf("P: %d, Q: %d\n", p, q);

    return 0;
}
