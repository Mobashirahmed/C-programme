// Take Input a Random Number from the user and print the last second digit number
#include<stdio.h>
int main()
{
    int num1; // local var declaration
    printf("Enter a number\t");
    scanf("%d",&num1);
    num1/=10; // remove last one digit
    num1%=10; // find out the last one digit
    // num1=num1%100;
    // printf("Your req. digit %d",num1);
    // num1=num1/10;
    // last second most digit dega
    printf("\nSecond most digit is %d",num1);
    return 0;
}