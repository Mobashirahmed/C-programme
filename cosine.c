/*----------------------PROGRAM USING A COSINE FUNCTION-----------------------*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1416
#define MAX 180
void main()
    {
        int angle,d;
        float x,y;
        angle=0;
        printf("Welcome to Cosine calculator\nThis Application will provide you a tabulated values of cosine function for different values of angles\n  Enter the common difference of the angles: ");
        scanf("%d",&d);
        printf("Angle(in degrees)      Cos(angle)\n");
        while(angle <= MAX)
            {
                x = (PI/MAX)*angle;
                y = cos(x);
                printf("%15d %13.4f\n",angle, y);
                angle = angle + d;
            }
        getch();
    }