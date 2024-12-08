/* Yeh CODE chal nahi raha hai */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    char a[16];
    int i, j, k, len;

    printf("Enter a binary number: ");
    gets(a);
    len = strlen(a);

    for(k=0; a[k] != '\0'; k++){
        if(a[k] != '0' && a[k] != '1'){
            printf("\nIncorrect binary number format ... the program will quit");
            exit(0);
        }
    }

    for(i = len-1; a[i] != '1'; i--){
        for(j=i-1; j>=0; j--){
            if(a[j] == '1'){
                a[j] = '0';
            }
            else{
                a[j] = '1';
            }
    printf("\n2's Complement = %s", a);
        }
    }
    
    return 0;
}