// A C Program to print all the numbers in between 1000 and 2000 and number ends with 7 and divided by 7 and also prints amounts of counts occurrence.

#include<stdio.h>
#include<stdbool.h>

int extractDigit(int num1);

bool checkDigit(int num1);
bool checkMultiple(int num1);

void listValues(int num1, int num2);

int count=0; // global declaration of count variable

int main(){
    int num1 = 1000;
    int num2 = 2000;
    printf("List of numbers in b/w 1k & 2k that ends with 7 and are also divisible by 7 are as follows:\n");
    listValues(num1, num2);
    // int lastDigit = extractDigit(num1);
    // printf("%d",lastDigit);
}

int extractDigit(int num1){
    return num1%10;
}

bool checkDigit(int num1){
    return extractDigit(num1) == 7;
}

bool checkMultiple(int num1){
    return num1%7 == 0;
}

    

void listValues(int num1, int num2){
    for(num1; num1<num2; ++num1){
        if (checkDigit(num1) && checkMultiple(num1)){
            count++;
            printf("\t%d\n",num1);
        }
    }
    printf("Number of Multiples is %d",count);
}