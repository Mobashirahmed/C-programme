/* Program to illustrate the pointer expression and pointer arithmetic */

#include<stdio.h>
#include<conio.h>

int main(){
    int *ptr1, *ptr2;
    int a, b, x, y, z;
    a = 30;
    b = 60;
    ptr1 = &a;
    ptr2 = &b;
    x = *ptr1 + *ptr2 - 6;
    y = 6 * -*ptr1 / *ptr2;
    printf("\nAddress of a: %p", ptr1);
    printf("\nAddress of b: %p", ptr2);
    printf("\na = %d, b = %d", a, b);
    printf("\nx = %d, y = %d", x, y);
    
    // Operation on pointers
    ptr1 = ptr1 + 70;
    ptr2 = ptr1;
    printf("\nptr1 = %p, ptr2 = %p", ptr1, ptr2);
    return 0;
}