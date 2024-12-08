// Program to calculatethe length of string

#include<stdio.h>
int main(){
    char str[1000];
    int i = 0;
    printf("Enter the string: ");
    scanf("%999s", str);

    while(str[i] != '\0'){
        i++;
    }
    printf("length of string is %d", i);
    return 0;
}