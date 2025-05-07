#include <stdio.h>
#include <stdlib.h>

void dizi_yaz(float x[], int n){
    for(int i = 0; i < n; i++){
        printf("\n%.2f", x[i]);
    }
}

int main(){
    float dizi[5] = {8.471,3.683,9.107,4.739,3.918};
    dizi_yaz(dizi, 5);
    return 0;
}