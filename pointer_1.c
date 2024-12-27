#include<stdio.h>
#include<conio.h>

int main(){
    int first, second, sum;
    int *p, *q;
    printf("Enter two integers to add\n");
    scanf("%d%d", &first, &second);
    p = &first;
    q = &second;
    sum = *p + *q;
    printf("Sum of entered numbers = %d\n", sum);
    return 0; 
}