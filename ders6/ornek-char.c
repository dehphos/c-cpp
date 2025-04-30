#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[2][3] = {5, 3, 7, 0, 1, 2};
    int b[2][3] = {1,2,3,4,5,6};
    int c[2][3];
    int i, j;

    printf("\n\nA matrisi: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    };
    printf("\n\nB matrisi: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    };
    printf("\n\nC matrisi: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    };
    printf("\n\n");
}