/* Program to illustrate conditional goto */


#include<stdio.h>
int main(){
    /* local variable declaration */
    int a = 10;
    LOOP:
            if(a <= 14){
                ++a;
                printf("value of a: %d\n",a);
                goto LOOP;
            }
    return 0;
}