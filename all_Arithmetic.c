#include<stdio.h>
#include<conio.h>
void main()
    {
        int a, b;
        printf("Enter two numbers to perform operations ");
        scanf("%d %d",&a, &b);
        printf("\nSum of %d and %d is %d", a, b, a+b);
        printf("\nDifference of %d and %d is %d", a, b, a-b);
        printf("\nProduct of %d and %d is %d", a, b, a*b);
        printf("\nQuotient of %d and %d is %d", a, b, a/b);
        printf("\nRemainder of %d and %d is %d", a, b, a%b);
        printf("\nPre-Incremented value stored in \"a\" is %d",++a);
        printf("\nPre-Decremented value stored in \"b\" is %d",--b);
        getch();
    }
