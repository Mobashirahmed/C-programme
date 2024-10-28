// program that takea two numbers from the user and performs operation accordind to the selection of user
#include<stdio.h>
#include<stdio.h>
void main()
{
    int A, B, res, opt;
    printf("Enter two numbers for the operation \t");
    scanf("%d %d",&A, &B);
    printf("Select the value of operation (1..3)..\t");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:                                             /* case constant-expression : */
            res = A + B;
            printf("You opted for Addition of %d and %d is %d",A,B,res);
            break;                                      /*break statement tells the compiler to terminate the selected case what ultimately takes it out from the switch statements*/
    case 2:
            res = A - B;
            printf("You opted for Subtraction of %d and %d is %d",A,B,res);
            break;
    case 3:
            res = A * B;
            printf("You opted for multiplication of %d and %d is %d",A,B,res);
            break;

    default:
            printf("Wrong Selection ...");
            break;
    }
}