/* Program to illustrate backward unconditional goto */
// NOTE: the following code will be executed infinitely
#include<stdio.h>
int main(){
    printf("example for unconditional goto... ."); 
    loop: printf("\n This statement is executed... .");
    printf("\nthis statement is also executed... .");
    goto loop;
    return 0;
}