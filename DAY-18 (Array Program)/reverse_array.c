#include <stdio.h>

int main()
{
    // Print Reverse Array Elements:
    // int marks[] = {25, 18, 36, 55, 40};

    // printf("Reverse Array Elements: ");
    // for(int i=4; i>=0; i--){
    //     printf("%d ", marks[i]); // 40, 55, 36, 18, 25
    // }

    // Print Reverse Array Elements size and values taking from user:

    int size;
    
    printf("Enter Array Size: ");
    scanf("%d", &size);

    int arrUser[size];

    printf("Enter Array Elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arrUser[i]);
    }

    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arrUser[i]);
    }

    return 0;
}