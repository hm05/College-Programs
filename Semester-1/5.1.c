/*This program is related to conditional statements (ladder if... else).
This program is written by Harsh Murjani,
at Charusat University.
Student ID - 22TIT007 */

#include<stdio.h>

void main()
{
    //Variable Allocation//
    int ht,mht,fht,sht;

    //Input//
    printf("Enter your height = ");
    scanf("%i",&ht);
    printf("Enter your mother's height = ");
    scanf("%i",&mht);
    printf("Enter your father's height = ");
    scanf("%i",&fht);
    printf("Enter your sibling's height = ");
    scanf("%i",&sht);

    //If else Starts Here//
    if(ht<150)
    {
        printf("You are Dwarf\n");
    }
    else if(ht<165)
    {
        printf("You are Average\n");
    }
    else if(ht<=195)
    {
        printf("You are Tall\n");
    }
    else
    {
        printf("You have abnormal height\n");
    }

    if(mht<150)
    {
        printf("Your mother is Dwarf\n");
    }
    else if(mht<165)
    {
        printf("Your mother is Average\n");
    }
    else if(mht<=195)
    {
        printf("Your mother is Tall\n");
    }
    else
    {
        printf("Your has abnormal height\n");
    }

    if(fht<150)
    {
        printf("Your father is Dwarf\n");
    }
    else if(fht<165)
    {
        printf("Your father is Average\n");
    }
    else if(fht<=195)
    {
        printf("Your father is Tall\n");
    }
    else
    {
        printf("Your father has abnormal height\n");
    }

    if(sht<150)
    {
        printf("Your sibling is Dwarf\n");
    }
    else if(sht<165)
    {
        printf("Your sibling is Average\n");
    }
    else if(sht<=195)
    {
        printf("Your sibling is Tall\n");
    }
    else
    {
        printf("Your sibling has abnormal height\n");
    }
    //If else Ends Here//
}
