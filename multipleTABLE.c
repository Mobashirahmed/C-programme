#include<stdio.h>

int main(){
    int num;
    printf("Enter a number ");
    scanf("%d",&num);

    printf("Multiple TABLE of %d is as follows:\n",num);

    for(int i = 1; i<=10; ++i){
        int mul = num*i;
        printf("\t%d*%d=%d\n",num, i, mul);
    }
    return 0;
}