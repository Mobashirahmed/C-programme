#include<stdio.h>

int main(){
    int array [3][4] = {{5, 9, 2, 8},{6, 7, 3, 5},{9, 5, 3, 7}};
    printf("A 2-D Array: \n");
    for(int i=0; i<3; ++i){
        for(int j = 0; j<4; ++j){
            printf("%d, ",array[i][j]);
        }
        printf("\n");
    }
}