/*This program is related to conditional statements (nested if... else).
This program is written by Harsh Murjani,
at Charusat University.
Student ID - 22TIT007 */

#include<stdio.h>

void main()
{
    //Variable Allocation//
    int a,b,c;

    //Input//
    printf("Enter age of Ram = ");
    scanf("%d",&a);
    printf("Enter age of Shyam = ");
    scanf("%d",&b);
    printf("Enter age of Ajay = ");
    scanf("%d",&c);

    //If else Starts Here//
        if(a<b)
        {
            //Nesting 1 Starts Here//
            if(a<c)
            {
                printf("Ram is youngest");
            }
            else if(c<a)
            {
                printf("Ajay is youngest");
            }
            else
            {
                printf("Ram and Ajay are same");
            }
            //Nesting 1 Ends Here//
        }
        else if(c<a)
        {
            //Nesting 2 Starts Here//
            if(b<c)
            {
                printf("Shyam is youngest");
            }
            else if(c<b)
            {
                printf("Ajay is youngest");
            }
            else
            {
                printf("Shyam and Ajay are equal");
            }
            //Nesting 2 Ends Here//
        }
        else if(a==b==c)
        {
            printf("All are of equal age");
        }
        else if(a==b)
        {
            printf("Ram and Shyam are same");
        }
        else if(b==c)
        {
            printf("Ajay and Shyam are same");
        }
        else
        {
            printf("Ram and Ajay are same");
        }
    //If else Ends Here//
}
