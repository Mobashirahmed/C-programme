// Take Input a Random Number from the user and print the first three-digits of that number.
#include<stdio.h>
int main(){
    long int num;
    printf("Enter a number ");
    scanf("%d",&num);
        while(num>=1000){
        num /= 10;
        printf("\n%d",num);
        }
        printf("\nFirst Three-Digits of your number is %d",num);
    return 0;
}