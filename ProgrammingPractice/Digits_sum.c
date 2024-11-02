#include <stdio.h>

int main()
    {
        int num, originalNum, sum = 0;

        // Input from the user
        printf("Enter a positive integer: ");
        scanf("%d", &num);

        // Store the original number for later usages .e.g; to show what no. was being entered
        originalNum = num;

        // Calculate the sum of digits
        while (num > 0)
            {
                int digit = num % 10; // Extract the last digit
                sum = sum + digit; // Add the digit to the sum. It can also be coded as [ sum += digit; ]
                num = num / 10; // Remove the last digit. It can also be coded as [ num /= 10; ]
            }

        // Display the result
        printf("Sum of digits of %d = %d\n", originalNum, sum);

        return 0;
    }
