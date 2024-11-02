// Program to print such a pattern
//
//        * * * * *
//        *       *
//        *       *
//        *       *
//        * * * * *
//
#include<stdio.h>
void main()
    {
        int num1;
        printf("Enter a number\t");
        scanf("%d",&num1);
        for(int start=1; start<=num1;start++) {
            // printf("%d \n ",start);
            // printf("\n *"); to understand te working of for loop
            for(int initialize =1; initialize<=num1; initialize++) {
                 printf("\n *"); 

                 /*
                 if((i==1)||(i==num1)||(j==1)||(j==num1)) {
                 }
                 else{
                 }
                 */  
            }
            printf("\n *"); // for line change
        }
    }