// Add all the integers upto n
#include<stdio.h>
int main(){
    int n, num, sum=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
    for(num=1; num<=n; num++){
        sum += num;
    }
    printf("Sum upto %d is %d", n, sum);
    return 0;
}