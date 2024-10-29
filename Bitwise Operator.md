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
> It refers to the flipping of bits 0-->1 and 1-->0 .
