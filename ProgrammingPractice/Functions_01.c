// No argument and No Return Value
#include<stdio.h>
#include<conio.h>

//Function declaration
int add(int a, int b);
void sum(int a, int b); //Function declaration
void pro();

void main(){
    int a,b;
    printf("Enter two numbers "); // promt to shwo user to enter input
    scanf("%d %d",&a,&b); // take input fron user in variable a and b in integer type data

    sum(a,b);  // sum function calling

    // int result = add(12,3);
    // printf("\n%d",result);
    printf("\n%d",add(30,50));

    // clrscr(); // only turbo c 
    // getch(); // only turbo c
}
void sum(int a, int b){  //Function Definitin
        int c;
        c=a+b;
        printf("Addition %d",c);
}

int add(int a, int b){  //Function Definitin
        return a+b;
}


void pro(){
    printf("this is product logic method");
}