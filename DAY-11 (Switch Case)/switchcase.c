/* Switch Case: The switch statement in C is a control flow statement that allows for the selection
of one of many code blocks to be executed, based on the value of an expression. It serves as an
alternative to a long if-else if-else ladder when dealing with multiple conditions
based on a single variable.*/

//  Switch Case Syntax
/*
switch(expression/value){
    case value1: statement
    break;
    case value2: statement
    break;
    case value2: statement
    break;
    default: statement
    break;
}
*/

#include <stdio.h>

void main()
{
    // Mini calculator using switch case.
    // int value1, value2;
    // char ch;
    // printf("Enter value1 & value2: ");
    // scanf("%d%d", &value1, &value2);

    // printf("Enter Operator(+,-,*,/,%%): ");
    // scanf(" %c", &ch);

    // // apply switch case
    // switch (ch)
    // {
    // case '+':
    //     printf("Sum of value1 & value2: %d\n", value1 + value2);
    //     break;
    // case '-':
    //     printf("Sub of value1 & value2: %d\n", value1 - value2);
    //     break;
    // case '*':
    //     printf("Multi of value1 & value2: %d\n", value1 * value2);
    //     break;
    // case '/':
    //     printf("Div of value1 & value2: %.2f\n", (float)value1 / value2);
    //     break;
    // case '%':
    //     printf("Mod of value1 & value2: %d\n", value1 % value2);
    //     break;
    // default:
    //     printf("Invalid Operator\n");
    // }

    // Finding Week Day
    // int day;
    // printf("Enter Day: ");
    // scanf("%d", &day);

    // switch(day){
    //     case 1: printf("Sunday");
    //     break;
    //     case 2: printf("Monday");
    //     break;
    //     case 3: printf("Tuesday");
    //     break;
    //     case 4: printf("Wednesday");
    //     break;
    //     case 5: printf("Thursday");
    //     break;
    //     case 6: printf("Friday");
    //     break;
    //     case 7: printf("Saturday");
    //     break;
    //     default: printf("Invalid Day");
    //     break;
    // }

    //Finding Color 
    int colorNo;
    printf("Enter color Number(1-5): ");
    scanf("%d", &colorNo);

    switch (colorNo){
        case 1: printf("1: White");
        break;
        case 2: printf("2: Black");
        break;
        case 3: printf("3: Red");
        break;
        case 4: printf("4: Yellow");
        break;
        case 5: printf("5: Blue");
        break;
        default: printf("No Color");
        break;
    }
}