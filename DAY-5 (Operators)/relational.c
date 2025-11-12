// Relation Operators(<, <=, >, >=, ==, !=)

#include<stdio.h>

int main(){
// T=1 or F=0

int p = 5, q = 10;

printf("----Relational Operators Program-----\n");

int r = p < q;
printf("p < q: %d\n", r); // r=1
printf("p <= q: %d\n", p<=q); // 1
printf("p > q: %d\n", p>q); // 0
printf("p >= q: %d\n", p>=q); // 0
printf("p == q: %d\n", p==q); // 0
printf("p != q: %d\n", p!=q); // 1


    return 0;
}