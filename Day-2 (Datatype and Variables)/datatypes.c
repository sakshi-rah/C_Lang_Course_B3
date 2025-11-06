// datatype (4)
/*
1) int = integer value = a = 20, -56;
2) float = decimal value = b = 45.67; 
3) char = charecter = c = 'A' or 'a';
4) double = large number of decimal value = d = 4567.678943256;
*/

// datatype formate specifiers:
/*
1) int = "%d"
2) float = "%f" or "%.2f"
3) char = "%c", string = "%s"
4) double = "%lf" or "%.2f"
*/

// Rules of declaration of variables
/*  Variable name do not started with numbers as well as special symbols
    Variable doesn't contain any type of special symbols
    if i want separate variable name that time we use (_) symbol.
    Variable contain numbers also but in middle or end.
    Variable name contain camel case letter (eg. stdNameOfAiml)
    */
/*
datatype variable_name = 566; // variable assignment
int num; = V
int 2num; = I
float @name; = I
char std_name; = V
char emp-name; = I
int num2; = V
double std_1_per; = V
*/

#include<stdio.h>

int main(){
    int num = 24;
    char stdName = 'S';
    float stdPer = 99.99;
    double area = 8954.636456;

    printf("Number : %d\n", num);
    printf("Student Name: %c\n", stdName);
    printf("Student Per: %.2f\n", stdPer);
    printf("Area: %.2f\n", area); // 8954.65

    // Taking Input From User using scanf() function

    int roll_no;
    printf("\n\nEnter Roll No: ");
    scanf("%d", &roll_no);
    printf("Roll NO: %d\n", roll_no);

    float numAvg;
    printf("Enter Number Avg: ");
    scanf("%f", &numAvg);
    printf("Num Avg: %.3f\n", numAvg);


    return 0;
}