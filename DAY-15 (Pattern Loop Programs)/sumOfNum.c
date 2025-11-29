#include<stdio.h>

int main(){
// Sum of Number from 1 to 10 => 1+2+3+4+5+6+7+8+9+10 = 55

    int n, sum = 0;
    printf("Enter n Value: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d ", i); // 1 2 3 4 5
        sum += i; // sum = sum+i; // 0+1 = 1, 1+2= 3, 3+3 = 6, 6+4 = 10, 10+5 = 15
    }

    printf("\nSum of Numbers is %d\n", sum);

    return 0;
}