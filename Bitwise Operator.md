BITWISE OPERATORS:
1) Bitwise OR (|)
2) Bitwise AND (&)
3) Bitwise XOR (^)
4) Bitwise Left-shift (<<)
5) Bitwise Right-shift (>>)
6) Bitwise complementation (~)
Example program [For Bitwise OR]:
#include<stdio.h>
void main(){
  int a = 5, b = 10, c;
  c = a | b;
/*
Binary equivalent:                                    TRUTH TABLE
5 --> 101                                              0 | 0 = 0
10 --> 1010                                            0 | 1 = 1
Let us suppose int takes 2 bytes of memory:            1 | 0 = 1
5 --> 0000 0000 0000 0101                              1 | 1 = 1 
10--> 0000 0000 0000 1010
res-> 0000 0000 0000 1111 [on performing bitwise OR]
c = 2³*1+2²*1+2¹*1+2⁰*1 = 8+4+2+1 = 15
*/
  printf("%d",c);
}
Example program [For Bitwise AND]:
#include<stdio.h>
void main(){
  int a = 5, b = 9, c;
  c = a & b;
  /*
  Binary equivalent:                                  TRUTH TABLE
  5 --> 0101                                           0 & 0 = 0
  9 --> 1001                                           0 & 1 = 0
  In sixteen bit form:                                 1 & 0 = 0
  5 --> 0000 0000 0000 0101                            1 & 1 = 1 
  9 --> 0000 0000 0000 1001
  res-> 0000 0000 0000 0001 [On performing Bitwise AND]
  c = 2³*0+2²*0+2¹*0+2⁰*1 = 0+0+0+1 = 1
  */
  printf("%d",c);
}
Example program [For Bitwise XOR]
#include<stdio.h>
void main(){
  int a = 5, b = 17, c;
  c = a ^ b;
   /*
  Binary equivalent:                                   TRUTH TABLE
  5--> 0000 0101                                        0 ^ 0 = 0
  17-> 0001 0001                                        0 ^ 1 = 1
  res> 0001 0100                                        1 ^ 0 = 1
  [On performing Bitwise XOR]                           1 ^ 1 = 0
  c = 2⁷*0+2⁶*0+2⁵*0+2⁴*1+2³*0+2²*1+2¹*0+2⁰*0 = 0+0+0+16+0+4+0+0 = 20.
   */
   printf("%d",c);
}
Now we'll look at Bitwise complementation (~):
> Its a unary operator.
> It refers to the flipping of bits 0-->1 and 1-->0 .
Example Program [Bitwise COMPLEMENTATION]:
  #include<stdio.h>
  void main(){
  int x = 5, y;
  y = ~x;
  /*
  5--> 0000 0000 0000 0101
  On taking its complement we get:
       1111 1111 1111 1010
> The computer encounters M.S.B as 1 ;hence considers it as negative value.
> Now value is evaluated using 2's complement method:
    i) Add the place values of '0'.
    ii) Add 1 to it
    iii) Place a minus sign before the obtained value. Hence you got your value.
  */
  /*
  ~x = -(x+1) [Working of complementation operator]
 */
  printf("%d",y);
  }

Bitwise Left-shift (<<)
> Its a binary operator:
  L << R;
  we perform operation on L and R tells us how many times operation is to perform.
  In particular we have left shift the value of L by R.
  First of all, We take the Binary equivalent of L.
  Then we shift the bits of this value towards left by R times. On doing so, R number of right most bits will be poped out. And R number of '0' added on the left.
  And this New Binary Value's Decimal equivalent becomes the value of the expression. 

  >example program :
  #include<stdio.h>
  void main(){
    int x = 5;
    int y;
    y = x << 1;
    printf("%d",y);
  }

  #include<stdio.h>
  void main(){
    int x = 6;
    int y;
    y = x<<2;
    printf("%d",y);
  }

  > Note: let say we have x,
    then on x<<1 == 2x;
  In general x << n == (2^n)x ;
  > As in Decimal system, on adding a '0' on the left of the count. We get a value that is 10 times of the original value. In Binary system, on adding a '0' on the left of the count. We get a value that is @ times of the original value.
  Hence, in general, on adding n '0' on the left of a decimal value we get a value that is 10^n times of the original value. And on adding n '0' on the left of a binary value we get a value that is 2^n times of the original value.

  > Note: Never Left-shift the value more than the width of the type, for integer type do not exceed the limit of 15.
          OR in other words, int x<<16 ; will give you a warning!

Bitwise Right-shift (>>)
>Its a Binary operator.
 L >> R;
 we perform operation on L and R tells us how many times operation is to perform.
 In particular we have right shift the value of L by R.
 First of all, We take the Binary equivalent of L.
 Then we shift the bits of this value towards right by R times. On doing so, R number of left most bits will be poped out. And R number of '0' added on the left.
 And this New Binary Value's Decimal equivalent becomes the value of the expression.

 >example Program:
 #include<stdio.h>
 void main(){
  int x = 5;
  int y;
  y = x >> 1;
  printf("%d",y);
 }

 #include<stdio.h>
 void main(){
  int x = 10;
  int y;
  y = x >> 2;
  printf("%d",y);
 }
 > Note: let say we have x,
    then on x>>1 == x/2;
  In general x >> n == { x/(2^n), when x is even OR x-1/(2^n), when x is odd;}

  As per C standars the behaviour of negative numbers is undefined.

  1) 2^k => there is only a single 1 OR all bits except One are 0.
  2) Sum of n terms of a G.P is [1(2^n-1)]/[2^n-1]