#include<stdio.h>
int main()
    {
        int num1; // variable declaration
        printf("Enter a number\t");
        scanf("%d",&num1);
        if(num1%2==0)
            {
                printf("Your number %d is an Even Number.",num1);
            }
        else
            {
                printf("Your number %d is an Odd Number.",num1);
            }
        return 0;
    }