#include <stdio.h>
int main()
    {
        int i, sum = 0;
        printf("Enter a positive integer: ");
        scanf("%d", &i);
        while (i > 0)
            {
                int digit = i % 10;
                sum = sum + digit;
                i = i / 10;
            }
        printf("Sum of digits = %d\n", sum);
        return 0;
    }
