/*This program is related to increment and decrement operators.
This program is written by Harsh Murjani,
at Charusat University.
Student ID - 22TIT007 */

#include<stdio.h>

void main()
{
    //Variable Allocation//
    int yellow = 10, rajiv, preet, raj, ritul;

    //Output-1//
    printf("Count before execution = %d\n", yellow);

    //Operation Starts//
    rajiv = ++yellow;
    preet = --yellow;
    raj = yellow++;
    ritul = yellow--;
    //Operation Ends//

    //Output-2//
    printf("Value of Rajiv = %d\n", rajiv);
    printf("Value of Preet = %d\n", preet);
    printf("Value of Raj = %d\n", raj);
    printf("Value of Ritul = %d\n", ritul);
    printf("Count after execution = %d\n", yellow);
}
