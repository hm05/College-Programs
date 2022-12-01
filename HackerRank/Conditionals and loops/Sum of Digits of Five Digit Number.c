/*
    This is a program of HackerRank in C programming.
    And its name is "Sum of Digits of Five Digit Number"
    The aim of this program is to learn about the usage of modulo operator(%) in C language.
    This program is solved by Harsh Murjani.
*/

#include <stdio.h>

int main()
{
    int n,ans;
    scanf("%d", &n);
    ans=(n%10)+((n/10)%10)+((n/100)%10)+((n/1000)%10)+((n/10000)%10);
    printf("%d",ans);
    return 0;
}
