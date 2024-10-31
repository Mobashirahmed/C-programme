>SIGNED METHOD:
  For representing the sign of a given value we've a reserved bit what we call Significant bit.
    If 0 is stored in that bit then the value is positive.
    If 1 is stored in that bit then the value is negative.
>2's COMPLEMENT METHOD:
  Positive numbers are represented as it is stored in binary form.
  Negative numbers are stored in 2's complementation method:
  > First we'll find the binary equivalent of given number, without worrying about its sign [taking it similar to positive ones].
  > Find 1's complement of the given number's binary equivalent
  > Then add 1 to it, performing binary addition.
  > Finally this value is stored in the computer's memory.
The computer detects the significant bit [left most bit] and If it finds 1 there, then it understands that the value is negative and stored using 2's complement method.
  >It takes its 1's complement and then add 1 to it. [Again taking 2's complement]
  >Now it coverts to its decimal equivalent form. And the value is obtained with a negative sign.
Short method of evaluating 2's complement of a Binary value:
>Read the Binary value from Right to Left until you encounter a 1 there.
>Copy the Bits till you encounter your first bit as 1, from there on flip the bits 0-->1 and 1-->0. Hence the obtained Binary value is 2's complemented.

 • What will be the value in 2's complementation form?
   Take the place values of bits where 0 is denoted and add them in their negative form.
   Now add -1 to it. You'll obtain the negative value stored in 2's complementation form.
