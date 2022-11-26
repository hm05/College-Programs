/*This program is related to basic mathematical operations
This program is written by Harsh Murjani,
at Charusat University.
Student ID - 22TIT007 */

#include<stdio.h>

void main()
 {
     //Variable Allocation//
     int a,b,c,d;

     //Input//
     printf("please enter the value of a = ");
     scanf("%d",&a);

     //Calculation//
     b=a/100;
     c=a/50;
     d=a/10;

     //Output//
     printf("____________________");
     printf("\n|sr.no|notes|count |");
     printf("\n|1    |100rs|%d     |",b);
     printf("\n|2    |50rs |%d     |",c);
     printf("\n|3    |10rs |%d    |",d);
     printf("\n|_____|_____|______|");
 }
