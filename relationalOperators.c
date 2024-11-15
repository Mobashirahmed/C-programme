#include<stdio.h>
#include<conio.h>

int main(){
    int a = 85;
    int b = 96;

    printf("If %d is greater than %d then print 1, else print 0\n %d",a, b, a>b);
    printf("\nIf %d is greater or equal to %d then print 1, else print 0\n %d",a, b, a>=b);

    printf("\nIf %d is smaller than %d then print 1, else print 0\n %d",a, b, a<b);
    printf("\nIf %d is smaller or equal to %d then print 1, else print 0\n %d",a, b, a<=b);

    printf("\nIf %d is equal to %d then print 1, else print 0\n %d",a, b, a==b);
    printf("\nIf %d is not equal to %d then print 1, else print 0\n %d",a, b, a!=b);

    return 0;
}