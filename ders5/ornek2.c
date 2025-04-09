#include <stdio.h>

int main(){
    int grafik[10]={19,3,15,7,11,9,13,5,17,1};

    for(int i=0; i<10; i++){
        printf("\n %d. eleman değeri: %d\t -->", i, grafik[i]);
        for(int j=0; j<grafik[i]; j++){
            printf("*");
        }
    }
}