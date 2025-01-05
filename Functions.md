# Functions in C programming
    It is a set of Instructions used to perform a particular task. And It enables the programmer to reuse that given set of instructions as much number of times he/she wants.
    For example: lets say we've a multiplication function named mul
    
    #include<stdio.h>

    int mul(int, int); // Prototype OR Forward declaration of mul function
    /* syntax: data-type function_name(list of arguments);
       By default the return type of function is integer */ 
    
    void main(){
        inr a = 10;
        int b = 20;
        printf("%d",mul(a, b)); // calling mul function
    }
    
    // Defining mul function
    int mul(int a, int b){
        return a*b;
    }

    #include<stdio.h>
    
    void main(){
        int a = 10, b =20, c;
        c = mul(a, b); // compiler recognizes mul() as a functionn whose return type is integer
        printf("%d", c);
    }

    int mul(int x, int y){
        return x*y;
    }

    #include<stdio.h>

    void main(){
        double a =10.2, b = 13.6, c;
        c = mul(a, b); // at this point the compiler will give you an Error
        printf("%lf", c);
    }

    double mul (int x, int y){
        return x*y;
    }

    #include<stdio.h> // Forwardd declaration of printf() function is over here
    
    void main(){
        printf("%d", 10 + 20); // calling printf() function
    }

    And this code compiles effectively, without any error. Then here arises a question that where is the definition printf() ?
    ANSWER: The compiled files of library functions are stored in an Archieved folder, there's no need to define such functions and printf() is one of them. But here we'll need a linker to link these compiled files to our compiled file. And finally, the Loader loads the compiled file in the memory.

# How Function call works?

    #include<stdio.h>

    int mul(int , int);

    void main(){
        int a, b, c;
        a = 10;
        b = 20;
        c = mul(a, b);
        printf("%d", c);
    }

    int mul(int x, int y){
        int result;
        result = x*y;
        return result;
    }

    /*
    Memory allocation of all the variables present in the main() takes place first and are stored in the very bottom of the memory stack. Then the system allocates memory for the mul() just above the main() . Stack memory allocation and concept of LIFO FILO is followed for the activation record of functions.
    */

    #include<stdio.h>
    void f(){
        printf("1");
    }
    void g(){
        printf("2");
    }
    void h(){
        printf("3");
    }
    void main(){
        f();
        g();
        h();
    }

    #include<stdio.h>
    void f(){
        printf("1");
        g();
        printf("2");
    }
    void g(){
        printf("3");
        h();
        printf("4");
    }
    void h(){
        printf("5");
    }
    void main(){
        f();
        g();
        f();
    }
    
    #include<stdio.h>
    
    // Forward declaration of each functions helps to counter the error.
    void f();
    void g();
    void h();

    void f(){
        printf("1");
        g();
        printf("2");
    }
    void g(){
        printf("3");
        h();
        printf("4");
    }
    void h(){
        printf("5");
    }
    void main(){
        f();
        g();
        f();
    }

    /*
    OUTPUT: 13542 354 13542
    */

# Swap functions:
    #include<stdio.h>

    void swap (int, int);

    void main(){
        int a = 10, b = 20;
        printf("%d %d\n", a, b);
        swap(a, b); // while calling a function, the arguments are known as actual argument
        printf("%d %d\n", a, b);
    }
    
    // while defining a function, the arguments are known as formal arguments
    void swap(int x, int y){
        int temp;
        temp = x;
        x = y;
        y = temp;
        printf("values stored in a and b: %d %d, respectively. Inside the swap function", x, y);
    }

# Storage classes in C language:
    void main(){
        int a;
        printf("%d", a);
    }

    • Heap: dynamic memory allocation
    • Stack: activation record
    • Data Segment: static and global variables are present in this section. This section consists of following segments:
        uninitialized data segment
        initialized data segment
    • Code segment : executionable part, can be read only. everything is compiled at this time

    block:
        {
            --- ---
            --- ---
        }

    file:
        add.c , program.c

    multiple files: A WEB project

    In storage class we mainly have to understand:
    1. scope
    2. lifetime
    3. Default value
    4. Storage area

# auto
    scope: within the block
    lifetime: block
    default value: garbage
    storage area: stack
# register
    scope: block
    lifetime: block
    default value: garbage
    storage area: CPU register
# static
    scope: block (internal)
    lifetime: throughout the program
    default value: 0
    storage area: RAM (data segment)

    #include<stdio.h>
    void fun(){
        static int a = 1; // the value of a static persist between different function calls
        a++;
        printf("%d", a);
    }
    void main(){
        fun();
        fun();
        fun();
    }
    
    OUTPUT: 234

# extern
    scope: multiple files
    lifetime:
    default value:
    storage area:

    #include<stdio.h>
    int x; // global
    
    void f(){
        x++;
        printf("%d", x);
    }
    void g(){
        x++;
        printf("%d", x);
    }

    void main(){
        ++x;
        printf("%d", x);
    }
    
    #include<stdio.h>
    
    void f(){
        extern int x; // no memory allocation takes place
        x++;
        printf("%d", x);
    }
    
    int x;
    void g(){
        x++;
        printf("%d", x);
    }

    void main(){
        ++x;
        printf("%d", x);
    }

    #include<stdio.h>
    static int x; // global and its scope is within the file (internal linkage)
    void f(){
        ++x;
        printf("%d", x);
    }
    void main(){
        x++;
        printf("%d", x);
    }