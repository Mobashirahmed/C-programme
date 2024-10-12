#include<stdio.h>
#include<conio.h>
void main()
    {
        float a,l,b,r,c,s,t,i,d,p;
        printf("Enter the radius of your Circle \t");
        scanf("%f",&r);
        c=3.14*r*r;
        printf("\vEnter the side length of your Square \t");
        scanf("%f",&a);
        s=a*a;
        printf("\vEnter the values of length ang breadth of your Rectangle \t");
        scanf("%f,%f",&l,&b);
        t=l*b;
        printf("\vEnter Side length of your ||gm and the distance between the || sides \t");
        scanf("%f,%f",&i,&d);
        p=i*d;
        printf("\vArea of your required Circle=%f",c);
        printf("\nArea of your required Square=%f",s);
        printf("\nArea of your required Rectangle=%f",t);
        printf("\nArea of your required Circle=%f",p);
        getch();
    }