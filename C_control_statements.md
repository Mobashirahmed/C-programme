C - LOOP CONTROL STATEMENTS
• You may enciunter situations, when a block of code needs to be executed several number of times. In general, statements are executed sequentially. The first statement in a function is executexd first, followed by the second, and so on.

• Loop statements are categorised into two groups:
1. Entry control loop
2. Exit control loop

> Entry control loop:
• An entry loop checks the condition at the time of entry and if condition or expression becomes true then control transfers into the body of the loop. Such type of loop controls entry to the loop that's why it is called Entry control loop.
    • if the condition fails at the very first time the body of the loop will not be executed.

> Exit control loop:
• An Exit control loop checks the condition for exit anfd if the given condition for exit evaluate to false, control will exit from the loop body else control will enter into the loop.

• Such type of loop controls exit of the loop that's why it is called exit control loop.
    • If the condition fails first time but body of loop will execute minimum one time.

There are several types of loop:
1. for loop
2. while loop
3. do while loop

> FOR LOOP
• This is one of the most frequently used loop in C programming. This is an enty control loop.

Syntax:
For(initialization; condition test; increment or decrement){
    // Statements to be executed repeatedly
}

Working:
step1: First the initialization happens and the counter variable gets initialized.
step2: In the second step the condition is checked where the counter variavle is tested for the given condition, if the condition returns true then C statements inside the body of the loop executed, if the conditionn returns false then the for loop gets terminated and the control comes out of the loop.
step3 : After the successfully execution of statements inside the body th ecounter variable is incremented or decremented, depending upon the operatin (++ or --)

• EXAMPLE
#include<stdio.h>
#include<conio.h>

void main(){
    int num, count, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
// for loop terminates when n is less than count\
for(count = 1; count <= num; ++count){
    sum += count; // sum = sum + count
}

printf("Sum = %d", sum);
getch();
}

EXAMPLE
• C program to find Factorial of a number.
#include<stdio.h>
#include<conio.h>

void main(){
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter an Ineger: ");
    scanf("%d", &n);

    // Show error if the user enters a negative integer 
    
    if (n<0)
        printf("Error! Factorial of a negative number doesn't exit.");
    else
        for(i=1; i<=n; ++i){
            factorial *= i; // factorial = factorial * i
        }
        printf("Factorial of %d = %llu", n, factorial);
    getch();
}

EXAMPLE
•  Fibonacci series program in C language. The Fibonacci series:
    0, 1, 1, 2, 3, 5, 8, 13, 21, ... .

#include<stdio.h>
#include<conio.h>

void main(){
    int n, first = 0;, second = 1, next, c;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    printf(" First %d tems of Fibonacci Series:\n");

    for(c = 0; c < n; c++){
        if( c<=1 ){
            next = c;
        }
        else {
            next = first + second;
            // swapping values
            first = second;
            second = next;
        }
    printf("%d\n", next);
    }
    getch();
}

> Various forms of for loop in C:
1. Initialization part can be skipped feom loop as shown below, the counter variable is declared before the loop.

    int num = 10;
    for(; num <20; num++)

• Even though we can skip initialization part but semicolon (;) before condition is must, without whichh you will get compilation error.
2. Like Initialization You can also skip the increment part as we did below. In this case semicoolon (;) is must after condition logic. In this case the increment or decrement part is done inside the loop
    for(num = 10; num<20; >){
        // Statements
        num++;
    }
3. This is also possible. the counter variable is initialized before the loopand incremented inside the loop:
    int num = 10;
    for(; num<20; ){
        // Statements
        num++;
    }
4. As mentioned above, the counter variable can be decremented as well. In the  below example the variable gets decremented each time the loop runs until the condition num>0 returns false.
    for( num = 20; num>10; num--)

> Nested for loop in C:

#include<stdio.h>
#include<conio.h>

void main(){
    for(int i = 0; i<2; i++>){
        for(int j = 0; j<4; j++>){
            printf("%d, %d\n", i, j);
        }
    }
    getch();
}
• In the above example, we have for loop inside another for loop, this is called nesting of loops. One of the example where we use nested for loop is two dimensional array.