#include<stdio.h>
#include<conio.h>

int main(){
    int mat1[3][3];
    int mat2[3][3];

    printf("Enter the elements of matrix1:\n");
    for(int i = 0; i<3; ++i){
        for(int j =0; j<3; ++j){
            printf("enter element A[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("\nEnter the elements of matrix2:\n");
    for(int i = 0; i<3; ++i){
        for(int j =0; j<3; ++j){
            printf("enter element B[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nSUM of matrices is as follows:\n");
    int sum_mat[3][3];
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            sum_mat[i][j] = mat1[i][j] + mat2[i][j];
            printf("%2d ", sum_mat[i][j]);
        }
        printf("\n");
    }
    getch();
}