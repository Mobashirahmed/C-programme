/*This is a C Program that will tell you the Simple intrest for a given amount & period*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        float pri, noyrs;
        float rate,si,amo;
        printf("Welcome to our specially Designed Simple Intrest Calculator. All you've to entre the details of your accounts");
        printf("\nEnter the Principle amount lent to you or lend by you\t");
        scanf("%f",&pri);
        printf("No. of years elapsed: ");
        scanf("%f",&noyrs);
        printf("Enter the Annual Rate at which intrest is too be calculated: ");
        scanf("%f",&rate);
        si=pri*noyrs*rate/100 ;
        printf("This is Your intrest developed over the Years: %f",si);
        amo=pri+si;
        printf("\nAnd the amount you have to pay to close the Deal will be: %f.\nThank for using our Application, Hope this Helped you a lot!",amo);
        getch();
    }