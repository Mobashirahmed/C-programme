// Program that tells you the Day of a Week depending upon your selections from 1 .. 7 .
#include<stdio.h>
#include<conio.h>
    void main()
    {
        int day; // local var. declaration
        printf("Enter the value of Day (1..7)..\t");
        scanf("%d",&day);
        switch(day)
        {
            case 1:
                printf("Day1 of week:Sunday");
                break;
            case 2:
                printf("Day2 of week:Monday");
                break;
            case 3:
                printf("Day3 of week:Tuesday");
                break;
            case 4:
                printf("Day4 of week:Wednesday");
                break;
            case 5:
                printf("Day5 of week:Thursday");
                break;
            case 6:
                printf("Day6 of week:Friday");
                break;
            case 7:
                printf("Day7 of week:Saturday");
                break;

            default :
                printf("Invalid Input ...");
        }
        getch();
    }