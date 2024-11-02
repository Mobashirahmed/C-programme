#include<stdio.h>
#include<stdlib.h>
getSum(int num1, int num2);
getDif(int num1, int num2);
getMul(int num1, int num2);
getQuo(int num1, int num2);
getRem(int num1, int num2);

int main(){
    int num1, num2;
    printf("Enter two numbers \n");
    scanf("%d %d",&num1, &num2);

    //calling Functions
    printf("Sum is %d\n",getSum(num1, num2));
    printf("Difference is %d\n",getDif(num1, num2));
    printf("Product is %d\n",getMul(num1, num2));
    printf("Quotient is %d\n",getQuo(num1, num2));
    printf("Remainder is %d",getRem(num1, num2));
    return 0;
}