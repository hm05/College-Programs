/*
    This is a program of HackerRank in C programming.
    And its name is "Conditional statements in C"
    The aim of this program is to understand if-else in C language.
    This program is solved by Harsh Murjani.
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(1<=n && n<=9)
    {
        if(n==1)
        {
            printf("one");
        }
        if(n==2)
        {
            printf("two");
        }
        if(n==3)
        {
            printf("three");
        }
        if(n==4)
        {
            printf("four");
        }
        if(n==5)
        {
            printf("five");
        }
        if(n==6)
        {
            printf("six");
        }
        if(n==7)
        {
            printf("seven");
        }
        if(n==8)
        {
            printf("eight");
        }
        if(n==9)
        {
            printf("nine");
        }
    }
    else
    {
        printf("Greater than 9");
    }
    return 0;
}
