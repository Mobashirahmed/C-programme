#include<stdio.h>
#include<conio.h>

int main(){
    int a = 56;
    int b = -64;
    int c = 0;
    
    printf("Value of OR; when both operands are zero\t\t\t %d",c||c);
    printf("\nValue of OR; when first operand is zero and other is non-zero\t %d",c||b);
    printf("\nValue of OR; when first operand is non-zero and other is zero\t %d",a||c);
    printf("\nValue of OR; when both operands are non-zero\t\t\t %d",a||b);
    printf("\n");
    
    printf("\nValue of AND; when both operands are zero\t\t\t %d",c&&c);
    printf("\nValue of AND; when first operand is zero and other is non-zero\t %d",c&&b);
    printf("\nValue of AND; when first operand is non-zero and other is zero\t %d",a&&c);
    printf("\nValue of AND; when both operands are non-zero\t\t\t %d",a&&b);
    printf("\n");

    printf("\nNOT of a non-zero value is %d",!a);
    printf("\nNOT of a non-zero negative value is %d",!b);
    printf("\nNOT of zero is %d",!c);

    return 0;
}