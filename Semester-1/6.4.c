/*
    This program is related to looping(while loop).
    This program is written by Harsh Murjani,
    at Charusat University.
    Student ID - 22IT079
*/

#include<stdio.h>

void main()
{
    int inp,sticks=21;
    while(1)
    {
        if(sticks!=1)
        {
            printf("Enter the number of matchsticks you want to pick: ");
            scanf("%d",&inp);
            if(inp<0 && inp>5)
            {
                continue;
            }
            printf("The computer is picking %d\n",5-inp);
            sticks=sticks-5;
        }
        else
        {
            printf("Sorry you loose!");
            break;
        }
    }
}
