/*
    Program to print string with their different specifications.
*/

#include<stdio.h>

int main(){
    char string[100] = "ORIGIN INDIA";

    printf("%s\n",string);
    printf("%12s\n",string); // length of string = witdth specified
    printf("%.6s\n\n",string);
    // printf("%6.6s\n",string);
    
    // right alignment and spaces append to the left
    printf("%15s\n",string);
    printf("%9.6s\n\n",string);
    
    // Left alignment and spaces append to the right
    // printf("%-.6s\n",string);
    // printf("%-6.6s\n",string);
    printf("%-15s\n",string);
    printf("%-9.6s\n\n",string);
    
    // targeting string index
    printf("%s\n",string+7);
    printf("%s\n\n",string+6);
    // printf("%3s\n",string+7);
    // printf("%4s\n",string+6);
    printf("%.3s\n",string+7);
    printf("%6.3s\n",string+7);
    printf("%-6.3s\n",string+7);    
    
    return 0;
}