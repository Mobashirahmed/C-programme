// Program to insert 5 elements into array and print elements of array.
#include<stdio.h>

int main(){
    int my_arr[5];

    for(int i = 0; i<5; ++i){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&my_arr[i]);
    }

    for(int i = 0; i<5; i++){
        printf("\nthe element %d : %d",i+1, my_arr[i]);
    }
    return 0;
}