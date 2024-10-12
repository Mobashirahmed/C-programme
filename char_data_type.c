#include<stdio.h>
int main()
{
    char a = 'a'; // ASCI standard a-->97, b-->98, c--->99
    char c;
    a++;
    printf("First I'll print the char value stored in \"a\" and that is %c",a);
    c = 99;
    printf("\nNext I'll print the char value stored in \"c\" and that is %c",c);
    return 0;
}