/*
    Array?
    Array is a collecction of similar types of data
    Structure?
    Structure is a user defined data type. Data types ,e.g; int, char, float, double, etc are built-in data types .i.e; they are predefined data type in C Library.
    It is used to store different types of data in a single unit.
    Example: i) emp_code => Integer
             ii) emp_name => char
             iii) designation => char
             iv) emp_salary => float
    syntax:
        struct structure_name{
            .... ;
            .... ;
            .... ;
            }
*/

#include<stdio.h>

    struct employee{
        int emp_code;
        char emp_name[50];
        char design[50];
        float salary;
    };

int main(){

    struct employee A = {101, "Mobashir Ahmed", "Student", 897.34};
    struct employee B;
        /*
            A {
            int A.emp_code;
            char A.emp_name[50];
            char A.design[50];
            float A.salary;
            };
        */
    //    A.emp_code = 101;
    //    A.emp_name = "Mobashir"; // Never work
    //    A.design = "Programmer"; // Never work
    //    A.salary = 34.45;
       printf("Enter employee code: ");
       scanf("%d", &B.emp_code);
       printf("Enter Employee name: ");
       scanf("%s", &B.emp_name);
       printf("Enter Designation: ");
       scanf("%s", &B.design);
       printf("Enter salary: ");
       scanf("%f", &B.salary);

       printf("Code: %d\n", A.emp_code);
       printf("Name: %s\n", A.emp_name);
       printf("Designation: %s\n", A.design);
       printf("Salary: %f\n", A.salary);
       
       printf("Code: %d\n", B.emp_code);
       printf("Name: %s\n", B.emp_name);
       printf("Designation: %s\n", B.design);
       printf("Salary: %f\n", B.salary);
    
    /*  Size of struct variable     */
    printf("Size of above declared struct data type: %d", sizeof(A));
    printf("Size of above declared struct data type: %d", sizeof(B));
    return 0;
}