/* An array is a collection of variables of the same data type stored in contiguous memory
    locations. It allows you to store and access multiple values using a single variable name
    with an index.
    indexing started from 0;

    Syntax of Array in C.
    data_type array_name[size];
*/

#include <stdio.h>

int main()
{
    //  int marks[5]; //declaration of array (must added size of array)
    // int num[] = {5, 10, 15, 20, 25}; // declaration and initilization (Optional added size of array)
    // //index = size-1/lenght-1
    // printf("First Element: %d\n", num[0]);
    // printf("Second Element: %d\n", num[1]);
    // printf("Third Element: %d\n", num[2]);
    // printf("Fourth Element: %d\n", num[3]);
    // printf("Fifth Element: %d\n", num[4]);

    // for(int i=0; i<5; i++){
    //     printf("Array Element[%d]: %d\n", i, num[i]); // num[0]=5, num[1]=10, num[2]=15, num[3]=20, num[4]=25
    // }

    // Getting array elements from user program:
    printf("\n--------------Mini Project(Calculate Students Result)-----------\n");
    int marks[5];
    int sum = 0;
    float avg, per;

    printf("\nEnter Marks of 5 Subject: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("\n--------Display Student Result-------\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject[%d]: %d\n", i + 1, marks[i]);
        sum += marks[i]; // sum=sum+marks[i] , 0+marks[0]
        avg = sum/5.0;
        per = (sum/500.00)*100;
    }

    printf("\nSum of All Subjects Marks: %d\n", sum);
    printf("\nAverage of All Subjects: %.2f\n", avg);
    printf("\nStudent Percentage : %.2f\n\n", per);

    return 0;
}
