# POINTERS in C programming

• C pointer ia a variable that stores/points the address of the another variable.
• C Pointer is used to allocate memory dynamically .i.e; at run time.
• The variable might be any of the data type such as int, float, char, double, short, etc.
    syntax: data_type *var_name;

Example: 
        int *p;
        char *c; // where * is used to denote that -- p and c are pointer varible not a normal variable.
Key points to remember about pointers in C:
•  Normal variable stores the value whereas pointer variable stores the address of the variable.
•  The content of the C pointer always be a whole number .i.e; address of variable.
• Always C pointer is initialized to null, i.e; int *p = null;
• The value of null pointer is 0.
• & symbol is used to get the address of the variable.
• * symbol is used to get the value of the variable that the pointer is pointing to.
• If pointer is assigned to NULL, it means it is pointing to nothing.
•  The size of any pointer is @ byte (for 16 bit compiler).
•  No two pointer variable should have the same name.
•  But a pointer variable and a non-pointer variable can have the same name.

# Pointer Initialization:
    Assigning value to pointer:
    • It is not necessary to assign value to pointer. Only zero (0) and NULL can be assigned to a pointer no other number can be assigned to a pointer,\. Consider the following example;
        int *p = 0;
        int *p = NULL;
    The above two assignments are valid.
        int *p = 1000;
    This statement is invalid.

    Assigning variable to a pointer:
        int x;
        int *p;
        p = &x;
    • This is nthing but a pointer variable p is assigned the address of the variable x. The address of the variables will be different every time the program is executed.

    Reading Value through pointer:
        int x = 123;
        int *p;
        p = &x;
    Here the pointer variable p is assigned the address of the varible x.
        printf("%d", *p); // It will print the value stored at the location where the pointer p is pointing to. i.e; 123
    This is reading the value through pointer.
        printf("%d", p); // It will display the address of the variable x in numeric format.
        printf("%d", &p); // It will display the address of the pointer variable p.
        printf("%d", x); // It will display the value of the variable x.
        printf("%d", &x); // It will display the address of the variable x.
    NOTE : It is always a good practice to assign pointer to a variable rather than 0 or NULL.

# POINTER Assignment:
    We can use a pointer on the right-hand side of an assignment to assign its value to another variable.

    Example:
        int main(){
            int var = 50;
            int *p1, *p2;
            p1 = &var;
            p2 = p1;
        }

    Chain of pointers/ Pointer to pointer:
    • A pointer can point to the address of another pointer.
    Consider the following example:
        int x = 456;
        int *p1;
        int **p2; // pointer -to-pointer
        p1 = &x;
        p2 = &p1;
        printf("%d", *p1); // It will display value of x = 456.
        printf("%d", *p2); // It will also display the value of x = 456.
    • This is because p2 points to p1, and p1 points to x.
    • Therefore p2 reads the value of x through pointer p1. Since one pointer points towards another pointer, it is called chain pointer.
      Chain pointer must be declared with ** as inn **p2.

# Manipulation of pointers:
    We can manipulate a pointer with the indirectionn operator '*', which is known as dereference operator. With this operator, we can indirectly access the data variable content.

    Syntax: *ptr_var;
    Example:
        #include<stdio.h>
        void main(){
            int a = 10;
            *ptr;
            ptr = &a;
            printf("The value of a: %d", a);
            *ptr = (*ptr)/2 ;
            printf(""The value of a: %d", *ptr);
        }

    Pointer Expression & Pointer Arithmetic:
    • C allows pointer to perform the following arithmetic operations.
    • A pointer can be incremented/ decremented.
    • Any integer can bwe added to or subtracted from the pointer.

    A pointer can be incremented/ decremented
        #include<stdio.h>
        void main(){
            inr a;
            int *ptr;
            ptr++;
        }
    • Each the pointer ptr is incremented, the pointer p will points to the memory location of the next element of its base type.
    •  Each time that a pointer ptr is decremented, the pointer ptr will points to the memory location of the previous elements of its base type.
        #include<stdio.h>
        void main(){
            int a;
            int *p1, *p2, *p3;
            p1 = &a;
            p2 = p1++ // post-increment means use the value before increment
            p3 = ++p1; // pre-increment means use the value after increment
            printf("Address of 'a' where p1 points to, is %u", p1) // 1000
            printf("After incrementing the Address value stored in p1, we obtain %u", p1) // 1002
            printf("After assigning and incrementing the Address value stored in p1, we obtain %u", p2) // 1000
            printf("After incrementing and assigning the Address value stored in p1, we obtain %u", p3) // 1002
        }
    • In 32 bit machine, six=ze of all tyoes of pointer is always 4 bytes. The pointer variable p1 refers to the base address of the variable a. We can increment the pointer variable.

    Increment operation on a pointer moves to the next memory address. let p be an integer pointer with a current value of 2000 (that is, it contains the address 2000). Assuming 32-bits integers, after the expression.
    The contents of p will be 2004, not 2001! Each time p is incremented, it will point to the next integer. the same is true for decrements. For example:
        int a;
        int *p;
        p = &a;
        --p; // will cause p to have the value 1996, assuming that it previously was 2000.
    • Here is why: Each time that a pointer is incremented, it will point to the memory location of the next element of its base type. Each time it is decremented, it will point to the location of the previous elemnt of its base type.

    Any integer can be added to OR subtracted from the pounter:
    • Like other variables pointer variables can be used in expressions.
      For example, if p1 and p2 are properly declared and initialized pointers, then the following statements are valid.
      y = *p1 * *p2;
      sum = sum + *p1;
      z = 5 - *p2/*p1;
      *p2 = *p2 + 10;
    • C allows us to add integers to add or subtract integers from pointers as well as to subtract one pointer from the other.
    • We can also use short hand operators with the pointers .e.g;
        p1 += 12;
        sum += *p2;
    • We can also compare pointers using relational operators the expressions such as
        p1 > p2;
        p1 == p2; // and
        p1 != p2;; // are allowed