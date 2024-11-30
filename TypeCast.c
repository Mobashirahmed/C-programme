#include<stdio.h>

int main(){
    float x = 5.55;
    int y = (int) x; // loss of data takes place due to explicit Type Casting. Fractional part .55 has not been taken. After Type Casting the value is assigned to a var. of the samwe type.
    printf("%d, ", y);

    int a = 10;
    int b = 3;
    
    float c = a/b; // Quotient of an integer with an integer will be an Integer. Since the value is assigned to a float var. We'll have a floating point value.
    printf("%f ", c);
    
    float d = (float) a / b; // typeCasting has Higher precednce over Arithmetic operators
    printf("%f ", d);

    float e = (float)(a/b); // Due to grouping; First Quotient is taken then Type Casting is done
    printf("%f.", e);
    return 0;
}