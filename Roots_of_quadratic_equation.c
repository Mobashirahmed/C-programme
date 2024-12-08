#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, D;
    // printf("Enter the values of a: ");
    // scanf("%d",&a);
    // printf("Enter the values of b: ");
    // scanf("%d",&b);
    // printf("Enter the values of c: ");
    // scanf("%d",&c);
    printf("Enter the value of co-efficients ,i.e; a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    D = (b*b) - (4*a*c);
    // printf("D: %d\n", D);

    if(D>=0){
        if(D>0){    // 4 -11 6
            float R1 = (-b + sqrt(D) ) / (2*a);
            float R2 = (-b - sqrt(D) ) / (2*a);
            printf("It has two real and distinct roots: %f and %f", R1, R2);
        }
        else{ // (D = 0)    // 1 -6 9 look for integral
            float r = -b/(2*a);
            printf("Both roots are identical: %f", r);
        }
    }
    else if(D<0){   // 1 2 5
        printf("It has Imaginary roots.");
    }
    return 0;
}