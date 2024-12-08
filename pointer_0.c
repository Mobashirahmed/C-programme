// Learnt pointer in C

#include<stdio.h>

int main(){
    int *ptr, val;

    val = 100;
    printf("Address of val: %p\n", &val);
    printf("Value of var: %d\n\n",val);
    
    ptr = &val;
    printf("Address of pointer ptr: %p\n", ptr);
    printf("Content of pointer ptr: %d\n\n", *ptr);

    *ptr = 101;
    printf("Address of val: %p\n", &val);
    printf("Value of val: %d\n\n", val);    // here we'd updated the value in val
     
    return 0;
}