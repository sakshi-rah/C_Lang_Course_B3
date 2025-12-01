// Structure in C Programming using struct keyword :- structure is collection of different type of
// data type is know as a structure
// predef data_type: int, float, char, double
// user def data_type: structure

/* Syntax :
struct student{
    int roll_no;
    char name;
    float mark;
};
*/

#include <stdio.h>
int i = 10;

struct student
{
    int roll_no;   // 4 byte
    char name;     // 1 byte
    float per;     // 4 byte
    double attend; // 8 byte = 17 byte
};
// In Case of Union you choose highest byte = 8 byte (only lagest size of variable)

int main()
{

    struct student obj = {67, 'S', 91.94, 100.00};

    printf("********* Student Detail**********\n");

    printf("Student Roll No. : %d\n", obj.roll_no);
    printf("Student Name: %c\n", obj.name);
    printf("Student Percetage: %.2f\n", obj.per);
    printf("Student Regular Attendance: %.2f\n", obj.attend);

    return 0;
}