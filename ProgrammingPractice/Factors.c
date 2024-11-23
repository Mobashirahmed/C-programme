/*
A C program to print all the factors from the user given number (number itself not included).
*/
#include<stdio.h>
#include<stdbool.h>

void factorsList(int num);
bool factorCheck(int num, int f);


int main(){
    int num;
    printf("Enter a non-zero composite number ");
    scanf("%d",&num);
    factorsList(num);
}



void factorsList(int num){
    int f;
    printf("List of factors of %d are as follows:\n",num);
    if(num != 0 && num != 1){
        for(f=2; f < num; ++f){
            if(factorCheck(num, f)){
                printf("\t%d\n",f);
            }
        }
    }
}

bool factorCheck(int num, int f)
{
    return num%f == 0;
}