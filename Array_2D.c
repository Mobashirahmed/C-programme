#include<stdio.h>
int main(){
    /*
    Initializing OR Declaring an 2D array:
    data-type array-name [no.of rows][no. of columns]
    Examples:
    int mat[3][2];
    int mat[2][3] = {4, 9, 3, 8, 1, 2}; // Here we've to assign i⨉j no. of elements.
    int mat[4][2] = {{4, 9}, {3, 8}, {1, 2}, {9, 3}}; // It can be also expressed like this!
    int mat[2][5] = {{8}, {6}}; // First element of first row is explicitly assigned 8 and other members are initialized to zero. Similarly the first element of the second row is explicitly assigned 6 and the rest are initialized to 0.
    */
   
   // Specifying the rows and columns of the Array
   int row, col;
   printf("\n enter the number of rows and columns ");
   scanf("%d%d",&row, &col);
   
   int arr[row][col]; // declaring an Array based on above user data
   
   // Reading a 2D array:
   int i, j;
// NOTE: i, j denotes the rows and the columns of the matrix OR 2D array, respectively.
   printf("\n Enter the elements of the 2D array\n");
   for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
        }
   }
   // Printing a 2D array:
   printf("\n The elements of the 2D array\n");
   for(i=0; i<row; i++){
    for(j=0; j<col; j++){
        printf("\t%d", arr[i][j]); // We've used \t for new column
    }
    printf("\n"); //We've used \n for new row
   }
   return 0;
}