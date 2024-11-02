#include<stdio.h>
void main()
 {
    int num1;
    printf("Enter a number\t");
    scanf("%d",&num1);
    /*printf("\nYour temporaray number %d",&num1);*/
    num1%=1000; // short hand Modulus operation [ num1=num1%1000; ]
    printf("Last three digits of your number is %d",num1 /*num1%1000*/);
 }