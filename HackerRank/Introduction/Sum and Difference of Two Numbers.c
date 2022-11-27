/*
    This is a program of HackerRank in C programming.
    And its name is "Sum and Difference of Two Numbers"
    The aim of this program is to know more about int and float data types in C language.
    This program is solved by Harsh Murjani.
*/

#include <stdio.h>

int main()
{
	int a, b;
    float c, d;

    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);

    int add1=a+b;
    int sub1=a-b;
    float add2=c+d;
    float sub2=c-d;

    printf("%d %d\n",add1,sub1);
    printf("%.1f %.1f",add2,sub2);

    return 0;
}
