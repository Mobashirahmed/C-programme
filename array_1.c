#include <stdio.h>
int main()
{
    int array[6] = {7, 5, 9, 3, 8}; // Array Initialization
    // Printing the Array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    // Inserting another Element
    printf("\nInsert another element: ");
    scanf("%d", &array[5]);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}