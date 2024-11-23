#include<stdio.h>

// Function to perform linear search
int linearSearch(int array[], int size, int target);



int main(){
    int array[] = {2, 3, 4, 10, 40};// initiallizing an array
    int size = sizeof(array) / sizeof(array[0]);// Computing the number of elements prestnt in the array
    int target = 10;
    int result = linearSearch(array, size, target); // Searching the target Element

    if (result != -1)
        printf("Element is present at index %d\n", result);
    else
        printf("Element is not present in array\n");
        
    return 0;
}


// Function Definition
int linearSearch(int array[], int size, int target){
    for (int i = 0; i < size; i++){
        if (array[i] == target)
             return i; // Return the index of the target element
    }
    return -1; // If the element is not found
}