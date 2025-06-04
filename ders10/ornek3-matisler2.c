#include <stdio.h>
#include <stdlib.h>

int main(){
    int **pwm;
    pwm = (int**) malloc(4 * sizeof(int*));
    for (int i = 0; i < 4; i++){
        pwm[i] = (int*) malloc(5 * sizeof(int));
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            pwm[i][j] = i*5+j*2; 
        }
    }

        for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            printf("%d\t", pwm[i][j]);
        }
        printf("\n");}

    for (int i = 0; i < 4; i++){
        free(pwm[i]);
    }
    free(pwm);
    pwm = NULL;
    return 0;

}