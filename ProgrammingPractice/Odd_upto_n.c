#include<stdio.h>
int main(){
    int n, i;
    printf("Enter a number upto which You want to list Odd numbers ");
    scanf("%d",&n);
    // while(A<=n){
    //     if(A%2==1){
    //         printf("%d\n",A);
    //     }
    // //     A++;
    // }
    for(i=1; i<=n; i++){
        if(i%2==1){
            printf("%d ",i);
        }
    }
    return 0;
}