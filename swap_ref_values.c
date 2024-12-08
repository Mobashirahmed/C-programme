#include<stdio.h>

void swap_by_ref(int *a, int *b);
int main(){
    int num1 = 10, num2 = 20;
    printf("Before calling swap_by_ref: num1 = %d, num2 = %d\n", num1, num2);
    swap_by_ref(&num1, &num2);
    printf("After calling swap_by_ref: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}

void swap_by_ref(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}