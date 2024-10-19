#include<stdio.h>
int main()
{
    // ASCI standard for characters : a-->97, b-->98, c--->99 ...
    char a = 'a';
    char c;
    char d;
    a++;
    printf("First I'll print the char value stored in \"a\" and that is %c",a);
    c = 99;
    printf("\nNext I'll print the char value stored in \"c\" and that is %c",c);
    c++ ;
    d = c ;
    printf("\nNow, I'll print the char value stored in \"d\" and that is %c",d);
    return 0;
}