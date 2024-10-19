#include<stdio.h>
#include<conio.h>
void main()
    {
        float length, breadth, area, perimeter, s;
        printf("Enter the values of length and breadth (in cm), respectively ");
        scanf("%f %f",&length, &breadth);
        area = length * breadth;
        s = length + breadth ; //first we'll store the sum as s. To apply the formula perimeter=2(length+breadth)
        perimeter = 2*s ;
        printf("Area of your rectangle is %.3f sq.cm \nAnd Its Perimeter is %.3f cm", area, perimeter);
        getch();
    }
