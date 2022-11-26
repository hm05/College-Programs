/*This program is related to conditional statements (nested switch case).
This program is written by Harsh Murjani,
at Charusat University.
Student ID - 22TIT007 */

#include<stdio.h>
#include<math.h>

void main()
{
    //Value Allocation//
    float a, b, c, discriminant, root1, root2, img;
    printf("Enter the value of A = ");
    scanf("%f",&a);
    printf("Enter the value of B = ");
    scanf("%f",&b);
    printf("Enter the value of C = ");
    scanf("%f",&c);

    //Discriminant Calculation//
    discriminant=(b*b)-(4*a*c);

    //Switch Starts Here//
    switch (discriminant==0)
    {
        case 1:
            root1=((-b)/(2*a));
            root2=root1;
            printf("Both roots are %.2f and %.2f",root1,root2);
            break;
        case 0:
            //Nested Switch Starts//
            switch (discriminant>0)
            {
                case 1:
                    root1 = ((-b + sqrt(discriminant))/(2*a));
                    root2 = ((-b - sqrt(discriminant))/(2*a));
                    printf("Both roots are %.2f and %.2f",root1,root2);
                    break;
                case 0:
                    root1 = (-b)/(2*a);
                    root2 = root1;
                    img = sqrt(-discriminant)/(2*a);
                    printf("Both roots are %.2f, %.2f and i%.2f",root1,root2,img);
                    break;
            }
            //Nested Switch Ends//
    }
    //Switch Ends Here//
}
