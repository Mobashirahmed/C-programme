# Recursion in C:
Recursion is calling function by itself again and again until some specified condition has been satisfied.
        What is recursion?
ANSWER: Whenever an operation is defined in terms of itself then this is known as recursion.
Syntax:
int f_name(int x){
    local variables;
    f_name(y); // this adds recursion
    statements;
}

Scenario of Recursion:
    if( ? ){
        small i/p
        base case
        easy case
        can be answered directly
        No recuessionn is needed
    }
    else{
        hard case
        cannot be answered directly
        recursion is needed
        large i/p
    }

# EXAMPLE 1: Factorial using recursion:

#include<stdio.h>
#include<conio.h>
int factorial(int n);

void main(){
    int res, n;
    printf("\n Enter the value: ");
    scanf("%d", &x);
    res = factorial(n);
    printf("The factorial of %d is %d", n, res);
}

int factorial(int n){
    int fact;
    if ( n==0 )
        return(1);
    else if(n==1)
        return(1);
    else
        fact = n*factorial(n-1);
    return (fact);
}

# EXAMPLE 2: Fibonacci using Recursion:

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
        return (0);
    else if(n == 1)
        return (1);
    else
        return (Fibonacci(n-1)+Fibonacci(n-2));
}

# EXAMPLE 3: Sum of n Natural numbers:

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

# EXAMPLE 4:

    i/p: n>=1
    o/p: Printing Mobashir n times.

    i/p: 1
    o/p: Mobashir
    i/p: 2
    o/p: MobashirMobashir
        :   :
        :   :
    i/p: 10
    o/p: MobashirMobashir...Mobashir(10 times)
    i/p: n
    o/p: MobashirMobashirMobashir...Mobashir(n times)

    #include<stdio.h>
    void print(int n){
        if( n==1 ){
            printf("Mobashir);
        }
        else{
            printf("Mobashir");
            print(n-1);
        }
    }

    void main(){
        int n;
        scanf("%d", &n);
        print(n);
    }

# EXAMPLE 5:

    n : n >= 0
    
    i/p: 125
    o/p: 8  (sum of digits)

    i/p: 1279
    o/p: 19

    i/p: 9
    o/p: 9

    if( n<10 ){
        return n;
    }
    else{

    }

    #include<stdio.h>

    int sum_digits(int n){
        if( n<10 ){
            return n;
        }
    }
    else{
        return (n%10) + sum_digits(n/10);
    }

    void main(){
        int n;
        scanf("%d", &n);
        if (n >= =){
            printf("%d", sum_digits(n));
        }
    }

# EXAMPLE 6:

    a^n , n >= 1

    i/p: a, n
    o/p: value of a^n

    if( ? ){
        samll i/p
        base case
        direct answer
        no recursion
    }
    else{
        hard case
        recursion is needed
    }

    #include<stdio.h>

    int pow(int, int);
    
    void main(){
        int a, 
        scanf("%d %d", &a, &n);
        printf("a^n = %d", pow(a, n));
    }

    int pow(int a, int n){
        if ( n==1 ){
            return a;
        }
        else{
            return a * po(a, n-1);
        }
    }

H/W: D --> B, Addition, multiplication
