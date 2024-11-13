#include<stdio.h>
int main(){
    int array [] = {7,2};
    /* Declaring an array:
        data-type array-name[size of array];
        examples:
        int mark [10];
        int mark [10] = {5, 5, 6, 8, 4, 3, 2, 5, 8, 6};
        int mark [] = {5, 7, 6, 2, 4, 9, 8, 5, 8, 6}; // Here the size of the array will be determined according to the number of elements assigned to it.
        int mark [10] = {1, 1, 9, 3, 7, 6, 2, 4, 9, 8, 5, 4, 9, 3}; // Here first ten elements are accepted and the rest are ignored.
        int mark []; // You cannot declare an array like this!
    */
    int i, n;
    int arr [n];

    printf("\n enter the number of elements in the array ");
    // reading the size of the array
    scanf("%d",&n);
    // reading the elements of the array
    printf("\n enter the values for the elements of the array");
    
    /*
        Reading elements into an array:
        scanf("%d",&a[0]);
        scanf("%d",&a[1]);
        scanf("%d",&a[2]);
    Above method is a tedious one! Isn't it!
    For a larger Array we've:
    int i;
    data-type a[10];
    for (i=0; i<10; i++){
    scanf("data-type format specifier",&a[i] );
    }
    */
    for(i=0; i<n; i++){
        printf("\n Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    // printing the elements of the array
    printf("\n printing the array elements ... .");
    printf("\n the values for the elements of the array");
    /*
    data-type array-name[size of array];
    printf("the array elements are... ..");
    for(i=0; i<10; i++){
    printf("\n the  element a[data-type format specifier] : data-type format specifier ",i, a[i]);
    }
NOTE : Here i denotes the index number of the array as well.
    */
    for(i=0; i<n; i++){
        printf("\n the element %d : %d",i+1, arr[i]);
    }
    return 0;
}