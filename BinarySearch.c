#include<stdio.h>

// Function to perform Binary search
int binarySearch(int array[], int size, int target);


int main(){
    int array[] = {2, 3, 4, 10, 40}; // Initiallizing an array
    int size = sizeof(array) / sizeof(array[0]); // Computing the size of the array
    int target = 10;
    int result = binarySearch(array, size, target); //Searching the target Element

    if (result != -1)
        printf("Element is present at the index %d\n", result);
    else
        printf("Element is not present in array\n");

    return 0;
}


// Function Definition:
int binarySearch(int array[], int size, int target){
    int left = 0; // naming the index of left most OR the first element of array as 'left'
    int right = size - 1; // 

    while(left <= right){
        int mid = left + (right - left) / 2;

        // Check if the target is present at mid
        if(array[mid] == target)
            return mid;

        // If the target is greater, ignore the left half
        if(array[mid] < target)
            left = mid + 1;

        // If the target is smaller, ignore the right half
        else
            right = mid - 1; 
    }

    // If the element is not found
    return -1;
}