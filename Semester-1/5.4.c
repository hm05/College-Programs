/*This program is related to conditional statements (ladder if... else).
This program is written by Harsh Murjani,
at Charusat University.
Student ID - 22TIT007 */

#include<stdio.h>

void main()
{
    //Variable Allocation//
    int stock=100, order;
    char umoney;

    //Input//
    printf("Please enter the number of chocolates you want to buy ");
    scanf("%i",&order);
    printf("Do you have enough money? (Y/n) ");
    scanf(" %c",&umoney);

    //If else Starts Here//
    if(order<=stock && (umoney=='y' || umoney=='Y'))
    {
        printf("%i chocolates will be delivered",order);
    }
    else if(order>=stock && (umoney=='y' || umoney=='Y'))
    {
        printf("%i chocolate will be delivery and remaining %i chocolate will be delivered later",stock,order-stock);
    }
    else
    {
        printf("Sorry, you don't have enough credit");
    }
    //If else Ends Here//
}
