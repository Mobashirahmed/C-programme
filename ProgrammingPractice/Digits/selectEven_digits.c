// A C program  to print all even digits of number entered by user

#include<stdio.h>

int main(){
    int a;
    printf("Enter a Number ");
    scanf("%d",&a);

    printf("And Its Digits are:\n");
    while(a != 0){
    int reverseNum = 0;
    int lastDigit = a%10;
    reverseNum = reverseNum * 10 + lastDigit;
        while(reverseNum != 0){
        int digit = reverseNum % 10;
        printf("%d\n",reverseNum);
        reverseNum /= 10;
        }
    }
}