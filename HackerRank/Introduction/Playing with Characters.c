/*
    This is a program of HackerRank in C programming.
    And its name is "Playing with Characters"
    The aim of this program is to learn about how to take a character, a string and a sentence as input in C language.
    This program is solved by Harsh Murjani.
*/

#include <stdio.h>

int main()
{
    char ch,str[50],sen[100];

    scanf("%c",&ch);
    scanf("%s\n",&str);
    scanf("%[^\n]s",&sen);

    printf("%c",ch);
    printf("\n%s",str);
    printf("\n%s",sen);

    return 0;
}
