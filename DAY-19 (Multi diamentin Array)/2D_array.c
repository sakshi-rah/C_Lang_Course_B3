#include <stdio.h>

int main()
{
    // Multidiamentional Array = 2D array
    // Syntax: data_type array_name[size(row)][size(col)]; i=row, j=col
    int twoArr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 2, 3}};

    // Printing Array Elements: (nested for loop)
    printf("2D Array[3][4]: \n");
    for (int i = 0; i < 3; i++)
    { // row
        for (int j = 0; j < 4; j++)
        { // col
            printf("%d ", twoArr[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");

    // Print Marks of Each Student:
    int marks[5][4] = {
        {40, 56, 60, 23},
        {45, 65, 48, 20},
        {65, 4, 53, 56},
        {45, 63, 20, 30},
        {12, 56, 43, 89}};

    printf("Student Marks (5 Students, 4 Subject): \n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Calculate Average marks of each student:

    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += marks[i][j]; // sum = sum+marks[0][0];
        }  
        float avg = sum/4.0;
            printf("Average of Student %d: %.2f\n", i + 1, avg);
    }

    
    return 0;
}