/* Program to illustrate forward unconditional goto */

#include<stdio.h>
int main(){
    printf("example for unconditional goto... ..");
    goto loop; // reference
    printf("this statement is skipped... ."); // this statement wil never be executed
    loop: printf("\n This statement is executed... .");
    return 0;
}