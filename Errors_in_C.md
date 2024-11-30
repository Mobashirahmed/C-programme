> Synatax errors and Logical errors in C programming:
• In C programming, syntax errors and logical errors  are diffferent types of errors that developers may encounter.
• While syntax errors are detected during the compilation process and result  from incorrect usage of programming language rules.
Whereas Logical errors are such mistakes in the implementation of the intended logic, which cannot be easily identified during the compilation process.
e.g;
#include<stdio.h>

int main(){
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num1; // Syntax is correct, but is logic is incorrect
    printf("Sum; %d", sum);
}

In this the code, the programmer intends to calculate the sum of num1 and num2, but due to logical error the sum we obtain is 2*num1. To identify such errors the programmer has to throughly go through the code, there won't be any error reported by the compiler. It requires GDB for debugging of the code or other similar tools. Other examples of logical errors:
using wrong loop conditions,
misusing pointers,
incorrect assignment in conditions,
Improper nesting of control structures,
etc.