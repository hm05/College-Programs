/*This program is related to basic mathematical operations
This program is written by Harsh Murjani,
at Charusat University.
Student ID - 22TIT007 */

#include<stdio.h>

void main()
{
    //Value allocation//
    int basic,da,hra,ma,ta,pf,it,gross,net;
    printf("Enter your Basic Salary = ",basic);
    scanf("%i",&basic);

    //Mathematical Operation Starts//
    da=basic*70/100;
    hra=basic*7/100;
    ma=basic*2/100;
    ta=basic*4/100;
    pf=basic*12/100;
    it=basic*10/100;
    gross=basic+da+hra+ma+ta;
    net=gross-(pf+it);
    //Mathematical Operation Ends//

    //Output//
    printf("DA of basic Salary = %i",da);
    printf("\nHRA of basic Salary = %i",hra);
    printf("\nMA of basic Salary = %i",ma);
    printf("\nTA of basic Salary = %i",ta);
    printf("\nPF of basic Salary = %i",pf);
    printf("\nGross Salary = %i",gross);
    printf("\nNet Salary = %i",net);
}
