#include<stdio.h>
int main(){
    char nameStr [20]; // Declaration of string
    /*
NOTE: We've to specify the array size during the declaration, what actually leads to the bound the USER input
    */
    printf("Enter your name (without spaces): ");
    // Reading a String using formatted function:
    // sacnf("%s",nameStr); // can lead to buffer if more than specified array size characters are input
    scanf("%19s",nameStr); // Safer one! Use %ns format specifier where n = array size - 1

    printf("This is what you've entered: %s",nameStr);
    // puts(nameStr);
    
    return 0;
}