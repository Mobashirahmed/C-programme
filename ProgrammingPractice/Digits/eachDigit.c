// To print each Digit of a given number one by one

#include<stdio.h>

// int reverseNum(int a);
// void getDigit(int a);

int main(){
    int a;
    printf("Enter a number ");
    scanf("%d",&a);

    int reverseNum = 0;

    while(a!= 0){
    int lastDigit = a%10;
    reverseNum = reverseNum * 10 + lastDigit;
    a /= 10;
    }

    // printf("%d",reverseNum);

    while(  reverseNum != 0 ){
        int digit = reverseNum %10;
        printf("%d\n",digit);
        reverseNum /= 10;
    }
    // printf("\n%d",a);
}

// int reverseNum(int a){
//     while(a!= 0){
//     int reverseNum = 0;
//     int lastDigit = a%10;
//     reverseNum = reverseNum * 10 + lastDigit;
//     a /= 10;
//     }
//     // return reverseNum;
// }


// void getDigit(int a){
//     printf("And its Digits are:");
//     while(reverseNum(a)!=0){
//         int digit = reverseNum(a)%10;
//         printf("\t%d\n",digit);
//         // reverseNum(a) /= 10;
//     }
// }