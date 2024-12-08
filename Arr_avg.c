// Program to find average marks of class.
#include<stdio.h>

int main(){
    int std;
    printf("Enter the no. of students of the class: ");
    scanf("%d", &std);
    
    int marks[std];
    printf("Enter the Marks of students in PPS\n");

    for(int i = 0; i<std; ++i){
        printf("Marks of roll no.%2d: ", i+1);
        scanf("%d", &marks[i]);
    }

    float sum = 0;
    for(int i = 0; i<std; ++i){
        sum += marks[i];
    }
    float avg = sum/std;
    printf("Average of Marks: %f", avg);
    return 0;
}