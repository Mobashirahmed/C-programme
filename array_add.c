#include<stdio.h>

int main(){
    int arr1 [3][4] = {{5, 9, 2, 8},{6, 7, 3, 5},{9, 5, 3, 7}};
    int arr2 [3][4] = {{6, 7, 3, 5},{9, 5, 3, 7},{5, 9, 2, 8}};
    int add[3][4];
    printf("A 2-D Array: \n");
    for(int i=0; i<3; ++i){
        for(int j = 0; j<4; ++j){
            add[i][j] = arr1[i][j] * arr2[i][j];
            printf("%d, ",add[i][j]);
        }
        printf("\n");
    }
}