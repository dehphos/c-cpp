#include <stdio.h>
#include <stdlib.h>

void yazdir(int* ptrS[], int indis, int elemanSayisi);

int main(){
    int S1[] = {1, 2, 3, 4, 5, 6};
    int S2[] = {10, 20, 30, 40, 50, 60};
    int S3[] = {11, 22, 33, 44, 55, 66};

    int* ptrS[] = {S1, S2, S3};

    yazdir(ptrS, 3, 6);

    return 0;
}

void yazdir(int* ptrS[], int indis, int elemanSayisi) {
    for(size_t i = 0; i < indis; i++){
        for (size_t j = 0; j < elemanSayisi; j++){
            printf("%d ", *(*(ptrS+i)+j));
        }
    }
}