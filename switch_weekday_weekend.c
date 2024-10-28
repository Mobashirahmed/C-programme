// This program print day is whether a weekday or is a part of the weekend
#include<stdio.h>
#include<conio.h>
void main()
    {
        int day;
        printf("Enter the value of Day (1..7) ..\t");
        scanf("%d",&day);
        switch(day)
        {
            case 1: // Sunday
            case 7: // Saturday
                    printf("You've selected a Week-End Day");
                break;
            case 2: // Monday
            case 3: // Tuesday
            case 4: // Wednesday
            case 5: // Thursday
            case 6: // Friday
                    printf("You've selected a Week Day");
                break;

            default:
                    printf("Invalid Input ...");
        }
    }