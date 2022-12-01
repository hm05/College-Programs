/*
    This program is related to looping (for loop).
    This program is written by Harsh Murjani,
    at Charusat University.
    Student ID - 22IT079
*/

#include<stdio.h>

void main()
{
    //Variable Allocation//
    int l=0,u=0,d=0,s=0,i;
    char pass[20];

    //Label to start the loop again//
    error:

    //Value Allocation//
    printf("Enter the password: ");
    scanf("%s",pass);

    //Looping Starts here//
    for(i=0;pass[i]!=0;i++)
    {
        if (islower(pass[i]))
        {
            l=1;
        }
        else if (isupper(pass[i]))
        {
            u=1;
        }
        else if (isdigit(pass[i]))
        {
            d=1;
        }
        else
        {
            s=1;
        }
    }
    //Looping Ends here//

    //If else starts here//
    if (l==0 || u==0 || d==0)
    {
        printf("Incorrect password\n");
        goto error;
    }
    else
    {
        printf("Correct password");
    }
    //If else ends here//
}
