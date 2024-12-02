// Learnt pointer in C

#include<stdio.h>

int main(){
    int val = 100;
    int *ptr = &val;

    printf("%d\n",val);
    printf("%d\n",*ptr);
    printf("%d",ptr);
    return 0;
}