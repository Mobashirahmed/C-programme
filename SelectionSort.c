#include<stdio.h>

// Function to perform Selection Sort
void selectionSort(int array[], int size);

// Function to print the Array
void printArray(int array[], int size);

int main(){
    int array[] = {64, 25, 12, 22, 11};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Unsorted array: \n");
    printArray(array, size);

    selectionSort(array, size);

    printf("Sorted array in ascending order: \n");
    printArray(array, size);

    return 0;
}

// Definition of Selection Sort
void selectionSort(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        // Find the minimum element in the unsorted part
        int minIndex = i;
        for(int j = i + 1; j < size; j++){
            if (array[j] < array [minIndex]){
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }
}

// Definition Array printer
void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        printf("%d, ", array[i]);
    }
    printf("\n");
}