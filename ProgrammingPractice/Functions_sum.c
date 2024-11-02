#include<stdio.h>

// Function declarations
void sum1(); // No Argument and No return Value 
void sum2(int a, int b); // Argument and No return Value 
int add1(); // No Argument and Return value
int add2(int a, int b); // Argument and Return value

void main(){

    int a,b;

    sum1(); // only call the method
    
    int var1 = add1(); // No argument and Return
    printf("Your add1 value:--> %d (from return)",var1);
    
    printf("\nEnter two numbers [from main method] ");
    scanf("%d %d",&a,&b);
    
    sum2(a,b); // call the method and set the value through arguments a and b variable

    printf("\nYour add2 value:--> %d (from return)",add2(a,b)); // Argument and Return
}

// 1. No Argument and No return Value 
void sum1(){
    int a,b;
    printf("Enter two numbers [No argument]: \t");
    scanf("%d %d",&a,&b);
    printf("Your sum1 value [no argument]:--> %d",a+b);
}

// 2. Argument and No return Value
void sum2(int a, int b){
    printf("Your sum2 value:--> %d",a+b);
}

// 3. No argument and return value
int add1(){
    int a,b;
    printf("\nEnter two numbers [No Argument] : \t");
    scanf("%d %d",&a,&b);
    return a+b;
}

// 4. Argument and Return value
int add2(int a, int b){
    return a+b;
}
