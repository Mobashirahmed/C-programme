#include<stdio.h>
int main()
{
    
    int size_of_char = sizeof(char);
    int size_of_int = sizeof(int);
    int size_of_short = sizeof(short);
    int size_of_long_int = sizeof(long int);
    int size_of_float = sizeof(float);
    int size_of_double = sizeof(double);
    
    printf("size of character data type is %d byte",size_of_char);
    printf("\nsize of integer data type is %d bytes",size_of_int);
    printf("\nsize of short integer data type is %d bytes",size_of_short);
    printf("\nsize of long integer data type is %d bytes",size_of_long_int);
    printf("\nsize of float data type is %d bytes",size_of_float);
    printf("\nsize of integer data type is %d bytes",size_of_double);

    return 0;

}