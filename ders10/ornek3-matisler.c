#include <stdio.h>
#include <stdlib.h>

int main(){
    int rows = 15;
    int cols = 15; 
    int **mat;
    mat = (int**) malloc (rows* sizeof(int*));

    for(int i = 0 ; i < rows; i++){
        mat[i] = (int *)malloc(cols * sizeof(int));
    }

    // Initialize the matrix with some values
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            mat[i][j] = i * cols + j + 1; // Example initialization
        }
    }


    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}