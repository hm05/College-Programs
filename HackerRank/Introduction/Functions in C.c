/*
    This is a program of HackerRank in C programming.
    And its name is "Functions in C"
    The aim of this program is to learn about the usage of functions in C language.
    This program is solved by Harsh Murjani.
*/

#include <stdio.h>

int main()
{
    int a, b, c, d, max;

    scanf("%i %i %i %i",&a,&b,&c,&d);

    if(a>b && a>c && a>d)
    {
        max = a;
        printf("%i",max);
    }
    else if(b>a && b>c && b>d)
    {
        max = b;
        printf("%i",max);
    }
    else if(c>a && c>b && c>d)
    {
        max = c;
        printf("%i",max);
    }
    else
    {
        max = d;
        printf("%i",max);
    }
    return 0;
}
