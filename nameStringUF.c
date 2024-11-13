#include<stdio.h>
#include<conio.h>

int main(){
    char name_string[20]; // Declaring the string
    printf("Enter your name\n(Do not press ENTER until you finish writting your name)\n"); // A prompt to the USER
    gets(name_string); // Reading a string using Unformatted Function
    /*
NOTE: If the USER enters more than 19, yhen this would lead to buffer.
    */ 
    printf("I guess!\nThis is your name: %s",name_string);
    // puts(name_string);
    
    return 0;
}