#include<stdio.h>

// Function to get the first three digits of an integer
char* firstThreeDigit(int num) {
    // Declare a static character array to hold the resulting string.
    // We use static so that the array persists outside the function.
    static char temp[20];

    // Loop to reduce the number to its first three digits
    // continue dividing 'num' by 10 until it becomes a three-digit number
    while (num > 100) {
        // Convert the integer 'num' to \ a string and places it in 'temp'
        // 'sprintf' formats 'num' as a string and places it in 'temp'
        sprintf(temp, "%d", num);

        //Divide 'num' by 10 too drop the last digit
        num /= 10;
    }
    // Return the resulting string which contains the first three digits
    return temp;
}

int main(){
    int num; // Variable to hold user input
    printf("Enter a number ");
    scanf("%d",num);
    printf("%d",firstThreeDigit(num));
}