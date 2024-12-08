#include<stdio.h>

int fibonacci(int);

int main(){
    int n, f;
    printf("Enter the no. of terms of the series: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        f = fibonacci(i);
        printf("%d ",f);
    }
    return 0;
}

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}