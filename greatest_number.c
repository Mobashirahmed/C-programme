// A Programme that takes three numbers and tell which one of them is greatest of all
#include<stdio.h>
#include<conio.h>
void main()
{
    int A,B,C;
    printf("Enter three numbers for comparison\t");
    scanf("%d %d %d",&A,&B,&C);
    if(A>B){
        if(A>C){
            printf("%d is the greatest of all",A);
        }
    }
    if(B>A){
        if(B>C){
           printf("%d is the greatest of all",B);
        }
    }
    if(C>A){
        if(C>B){
            printf("%d is the greatest of all",C);
        }
    }
}