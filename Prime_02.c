#include<stdio.h>
int main(){
    int num, i=2, isPrime = 1 ;
    printf("Enter a number ");
    scanf("%d",&num);
    if (num <= 1)
        isPrime = 0;
    else 
    for(i=2; i*i<=num; ++i){
        if(num%i==0)
            isPrime = 0;
    }
    
    if(isPrime)
        printf("%d ia a prime number",num);

    else
        printf("%d is not a prime number",num);
}