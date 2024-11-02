#include<stdio.h>
// Function Declarations
void sub1();
void sub2(int a, int b);
int diff1();
int diff2(int a, int b);

void main(){
    int a,b; // declaring local variables
    
    sub1(); // calling No Argument & No Return Function
    
    int c = diff1();
    printf("Your diff1 value :--> %d (from return)",c); // calling No argument & Return Function using var. declaration
    
    printf("\nEnter two numbers [In main method, for Argument function]: ");
    scanf("%d %d",&a,&b);

    sub2(a,b); // calling Argument and No Return Function

    printf("\nYour diff2 value :--> %d (from return)",diff2(a,b)); // calling Argument and Return Function

}

void sub1()
{
    int a,b;
    printf("\nEnter two numbers [No Argument]: ");
    scanf("%d %d",&a,&b);
    printf("Your sub1 value :--> %d",a-b);
}

void sub2(int a, int b)
{
    printf("Your sub2 value :--> %d",a-b);
}

int diff1()
{
    int a,b;
    printf("\nEnter two numbers [No Argument]: ");
    scanf("%d %d",&a,&b);
    return a-b;
}

int diff2(int a, int b)
{
    return a-b;
}