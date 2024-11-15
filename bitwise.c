#include<stdio.h>

int main(){
    int a = 6;
    int b = 3;
    
    printf("Bitwise OR of %d and %d is %d\n",a, b, a|b);
    printf("Bitwise XOR of %d and %d is %d\n",a, b, a^b);
    printf("Bitwise AND of %d and %d is %d\n",a, b, a&b);
    printf("Bitwise NOT of %d is %d",b, ~b);

    return 0;
}