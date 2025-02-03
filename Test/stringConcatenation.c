#include<stdio.h>
// #include<string.h>

int main(){
    char str1[100] = "Mobashir";
    char str2[100] = " Ahmed";
    // printf("Enter the first string: ");
    // gets(str1);
    // printf("Enter the second string: ");
    // gets(str2);
    // printf("The concatenated string is: %s", strcat(str1, str2));

    char str3[100] = "";
    int count = 0;
    for(int i = 0; str1[i] != '\0'; i++){
         str3[i] = str1[i];
         ++count;
    }
    for(int i = 0; str2[i] != '\0'; i++){
        str3[count+i] = str2[i];
    }
    printf("The concatenated string is: %s", str3);
    return 0;
}