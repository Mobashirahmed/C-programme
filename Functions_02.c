#include<stdio.h>
/* FUNCTION DECLARATIONS */
unsigned int mul1(); //No Argument and Return
double mul2(float a, float b); // Argument and Return

void main(){

    printf("A Program for multiplicatin of two Numbers\n");
    printf("Your value returned by mul1 Function %d\n",mul1()); //calling mul1 function
    
    float a ;
    float b ;

    printf("Enter two numbers for multiplication \n");
    scanf("%f %f",&a,&b);
    printf("%f \n%f\n",a,b);
    printf("Value returned by mul2 Function %lf \n",mul2(a,b)); // calling mul2 Function
}

/*-------FUNCTION DEFINITIONS----------*/
unsigned int mul1(){
    unsigned int a,b;
    printf("\nEnter two Integers for multiplication: (either +ve or -ve) \n");
    scanf("%d %d",&a,&b);
    return a*b;
}

double mul2(float a, float b){
    return a*b;
}