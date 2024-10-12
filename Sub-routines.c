/*----------PROGRAM USING sUB-ROUTINES FOR MULTIPLICATION------------*/
#include<stdio.h>
    int mul(int a, int b); /*---------------DECLARATION--------------*/
/*------------------------MAIN PROGRAM BEGINS------------------------*/
    int main()
    {
        int a,b,c;
        printf("Enter two numbers that are to be multiplied\t");
        scanf("%d %d",&a,&b);
        c = mul (a,b);
        printf("Product of your numbers %d and %d is %d",a,b,c);
        return 0;
    }
/*------------------------MAIN PROGRAM ENDS---------------------------*/
/*------------------------MUL FUNCTION STARTS-------------------------*/
        int mul(int x, int y)
        // int p;
        {
            int p;
            p=x*y;
            return(p);
        }
/*-----------------------MUL() FUNCTION ENDS--------------------------*/