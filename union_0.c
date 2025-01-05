#include<stdio.h>

union my_union {
    char c;
    int i;
    float f;
    double d;
};

int main(){
    union my_union u;
    u.c = 'u'; // here we'd assigned value to the char member of the union
    printf("%c\n", u.c);
    
    u.i = 84; // On initializing the int member of the union, the value of char member is overwritten in that respective memory location of my_union
    printf("%d\n", u.i);
    
    u.f = 3.14; // again here, the value of int member is overwritten by assigning a value to the float member in that respective memory location
    printf("%f\n", u.f);

    u.d = 3.14159626; 
    printf("%lf\n", u.d);

    printf("size of union u: %zu bytes", sizeof(u));
    return 0;
}