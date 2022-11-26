/*This program is related to increment and decrement operators.
This program is written by Harsh Murjani,
at Charusat University.
Student ID - 22TIT007 */

#include<stdio.h>

void main()
{
    //Variable Allocation//
    int yellow = 10, pink = 20, calculate;

    //Operators Starts//
    calculate = ++yellow + yellow++ + --yellow + ++pink - --pink - --pink;
    //Operators Ends//

    //Output//
    printf("The value of Calculate = %d\n", calculate);
    printf("The value of Yellow = %d\n", yellow);
    printf("The value of Pink = %d\n", pink);
}
