/*This program is related to macro functions.
This program is written by Harsh Murjani,
at Charusat University.
Student ID - 22TIT007 */

#include<stdio.h>
#include<math.h>

//Declaration of Macro Function Starts Here//
#define PI 3.14
//Declaration of Macro Function Ends Here//

void main()
{
    //Variable Allocation//
    float t1,t2,t3,t4,l1,l2,l3,l4,g1,g2,g3,g4;

    //Input//
    printf("Enter the value of Length (1) = ");
    scanf("%f",&l1);
    printf("Enter the value of Gravity (1) = ");
    scanf("%f",&g1);
    printf("\nEnter the value of Length (2) = ");
    scanf("%f",&l2);
    printf("Enter the value of Gravity (2) = ");
    scanf("%f",&g2);
    printf("\nEnter the value of Length (3) = ");
    scanf("%f",&l3);
    printf("Enter the value of Gravity (3) = ");
    scanf("%f",&g3);
    printf("\nEnter the value of Length (4) = ");
    scanf("%f",&l4);
    printf("Enter the value of Gravity (4) = ");
    scanf("%f",&g4);

    //Calculation//
    t1=2*PI*sqrt(l1/g1);
    t2=2*PI*sqrt(l2/g2);
    t3=2*PI*sqrt(l3/g3);
    t4=2*PI*sqrt(l4/g4);

    //Output//
    printf("\nTime (1) is %.2f seconds",t1);
    printf("\nTime (2) is %.2f seconds",t2);
    printf("\nTime (3) is %.2f seconds",t3);
    printf("\nTime (4) is %.2f seconds",t4);
}
