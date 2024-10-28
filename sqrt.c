#include<stdio.h>
#include<math.h>
void main()
{
    int A,res;
    printf("Enter a number\t");
    scanf("%d",&A);
    if(A>=0){
        printf("Entered no. is non-negative");
        res = sqrt(A);
        printf("\nSqrt of %d is %d",A,res);
        }
    else{
        printf("Entered number is negative");
        }
}