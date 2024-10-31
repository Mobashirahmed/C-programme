#include<stdio.h>
#include<stdbool.h>

int reverseNumber(int num);
bool isPallindrome(int num);
void getPallindrome(int num);

int main(){
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    
    // printf("%d",reverseNumber(num)); /
    getPallindrome(num); 
}



int reverseNumber(int num){
    int reverse = 0;
    while(num != 0){
        int last_digit = num % 10;
        reverse = reverse * 10 + last_digit;
        num/=10;
    }
    return reverse;
}



// check number is pallindrome or not.
bool isPallindrome(int num){
    if(num == reverseNumber(num)) return true;
    else return false;
                // OR
    // return num == reverseNumber(num);
}


// Print if number is palindromeor not.
void getPallindrome(int num){
    if(isPallindrome(num))
        printf("Number %d is Pallindrome",num);
    else
        printf("Number %d is not Pallindrome",num);
}