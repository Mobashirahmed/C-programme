#include<stdio.h>

int fact(int);

int main(){
    int n, result;
    printf("Enter any number: ");
    scanf("%d", &n);

    result = fact(n);
    printf("Now, %d! = %d", n, result);

    return 0;
}

int fact(int n){
    int f;
    if(n==1 || n==0){
        return 1;
    }
    else{
        f = n*fact(n-1);
        return f;
    }
}