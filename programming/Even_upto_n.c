#include<stdio.h>
int main(){
    int n, A=2;
    printf("Enter a value upto which You want to list the Even numbers ");
    scanf("%d",&n);
    while(A<=n){
        if(A%2==0){
        printf("%d\n",A);
        }
        A++ ;
    }
    return 0;
}