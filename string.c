#include<stdio.h>
#include<conio.h>

int main(){
    /* Initializing a String */
    
    // char str[15] = "Mobashir Ahmed"; // In this string we've got 14 characters. Hence the size of the array must be greater than or equal to 14+1=15.
    char str[] = "Mobashir Ahmed"; // Most prefered method
    // char str[20] = "Mobashir Ahmed"; // Here the size is specified to 20 bits but only 14 bits of the memory will be allocated. 
    // char str[] = {'M', 'o', 'b', 'a', 's', 'h', 'i', 'r', ' ', 'A', 'h', 'm', 'e', 'd', '\0'}; // no need to specify the size but NULL must be given as last character
    // char str[15] = {'M', 'o', 'b', 'a', 's', 'h', 'i', 'r', ' ', 'A', 'h', 'm', 'e', 'd', '\0'}; // Here we've specify the size and NULL also

    /*Printing a String*/

    printf("%s",str); // this is formatted output function.
    // puts(str); // this is unformatted output function.
}