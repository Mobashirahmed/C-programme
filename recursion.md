Recursion in C:
recursion is calling function by itself again and again until some specified condition has been satisfied.
Syntax:
int f_name(int x){
    local variables;
    f_name(y); // this ids recursion
    statements;
}

EXAMPLE 1: Factorial using recursion:

#include<stdio.h>
#include<conio.h>
int factorial(int a);

void main(){
    int res, x;
    printf("\n Enter the value: ");
    scanf("%d", &x);
    res = factorial(x);
    printf("The factorial of %d is %d", x, res);
}

int factorial(int x){
    int fact;
    if(n==1)
        return(1);
    else
        fact = n*factorial(n-1);
    return (fact);
}

EXAMPLE 2: Fibonacci using Recursion:

#include<stdio.h>
#include<conio.h>

int Fibonacci(int);

int main(){
    int n, i = 0, c;
    scanf("%d", &n);
    printf("Fibonacci series\n");
    for(c = 1; c <=n; c++){
        printf("%d ", Fibonacci(i));
        i++;
    }
    return 0;
}

int Fobonacci(int n){
    if(n == 0)
        return o;
    else if(n == 1)
        return 1;
    else
        return (Fibonacci(n-1)+Fibonacci(n-2));
}

EXAMPLE 3: Sum of n Natural numbers:

#include<stdio.h>
#include<conio.h>

int add(int n);

void main(){
    int m, x;
    printf("Enter a positive integer: ");
    scanf("5d", &m);
    x = add(m);
    printf("sum = %d", x);
    getch();
}

int add(int n){
    if( n != 0 )
        return n+add(n-1); // recursive call
}