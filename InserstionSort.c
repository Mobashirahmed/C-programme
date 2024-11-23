#include<stdio.h>

// Function to perform Insertion Sort
void insertionSort(int array[], int size);

// Function to print the array
void printArray(int array[], int size);

int main(){
    int array[] = {12, 11, 13, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Unsorted array: \n");
    printArray(array, size);

    insertionSort(array, size);

    printf("Sorted array in ascending order: \n");
    printArray(array, size);

    return 0;
}


//Definitin of Insertion Sort
void insertionSort(int array[], int size){
    for (int i = 0; i < size; i++){
        int key = array[i];
        int j = i - 1;

        // Move elements of array [0,..,i-1], that are greater than key,
        // To onecposition ahead of their current position
        while( j >= 0 && array[j] > key){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = key;
    }
}

// Definition of Array printter
void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        printf("%d, ", array[i]);
    }
    printf("\n");
}