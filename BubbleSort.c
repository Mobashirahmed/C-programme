#include<stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int array[], int size);

// Function to print the array
void printArray(int array[], int size);

int main(){
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Unsorted array: \n");
    printArray(array, size);

    bubbleSort(array, size);

    printf("Sorted array in ascending order: \n");
    printArray(array, size);

    return 0;
}



void bubbleSort(int array[], int size){
    for (int i = 0; i < size - 1; i++){
        for( int j = 0; j < size - i - 1; j++){
            if (array[j] > array[j+1]){
                // Swap the elements
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}


void printArray(int array[], int size){
    for (int i =0; i < size; i++){
            printf("%d, ", array[i]);
    }
    printf("\n");
}