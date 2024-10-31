/* This program will tell you whether the triangle formed is valid or not */
#include<stdio.h>

int validityCHECK(int A, int B, int C);

int main(){
    int A, B, C;
    printf("Enter the values of the side length of a triangle ");
    scanf("%d %d %d", &A, &B, &C);
    // if((A+B>C) && (B+C>A) && (A+C>B))
    //     printf("Valid Dimensions for a Triangle formation");
    // else
    //     printf("Invalid ...... ");
    printf("%d",validityCHECK(A, B, C));
    return 0;
}

// Function that verifies the Input for a valid Triangle
int validityCHECK(int A, int B, int C){
    if((A+B>C) && (B+C>A) && (A+C>B))
        printf("Valid Dimensions for a Triangle formation");
    else
        printf("Invalid ...... ");
}