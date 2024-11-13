#include<stdio.h>
#include<conio.h>

int sum (int x, int y);

int main(){
    int x,y,z;
    // clrscr();
    printf("Enter the value of x and y\t");
    scanf("%d%d",&x,&y);
    z = sum(x,y);       /*function calling (or line 1)*/
    printf("The sum of x and y is %d",z);
}

int sum(int x, int y){      /*function definition (or line 2)*/
    int sum;
    sum = x+y;
    return(sum);            /*return statement (or line 3)*/
}