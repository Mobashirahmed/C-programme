#include<stdio.h>

int main(){
    int i;
    float x[10], value, total;
    
    /* ..........Reading Value Into an Array..................*/

    printf("Enter 10 Real Numbers\n");

    for(i = 0; i<10; i++){
        scanf("%f",&value);
        x[i] = value;
    }

    /*...................Computation of Total.................*/

    total = 0.0;
    for( i = 0; i<10; i++){
        total = total + x[i];
    }

        /*...........Printing of x[i] values and total........*/
        printf("\n");
        for(i=0; i<10; i++){
            printf("x[%2d] = %5.2f\n", i+1, x[i]);
        }
            printf("\nTotal = %.2f\n", total);
        return 0;
}