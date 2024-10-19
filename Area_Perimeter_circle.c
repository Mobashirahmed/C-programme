#include <stdio.h>
#include<conio.h>
void main()
    {
        float r, area, circumference;
        printf("Enter the value of radius (in cm) ");
        scanf("%f",&r);
        area = 3.14*r*r;
        circumference = 2*3.14*r;
        printf("Area of your circle is %.3f sq.cm and its circumference is %.3f cm",area, circumference);
        getch();
    }

