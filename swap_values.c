#include<stdio.h>

void swap_by_value(int, int);

int main(){
    int num1 = 10, num2= 20;
    printf("Before calling swap_by_value: num1 = %d and num2 = %d\n", num1, num2);
    swap_by_value(num1, num2);
    printf("After calling swap_by_value: num1 = %d and num2 = %d\n", num1, num2);
    return 0;
}

void swap_by_value(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap_by_value: a = %d, b = %d\n", a, b);
}