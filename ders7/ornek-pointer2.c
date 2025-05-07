#include <stdio.h>

int main(){
    int *ptam, tam = 33;
    ptam = &tam;
    printf("tam icerik: %d \n", tam); 
    printf("tam adresi: %p \n", &tam); 
    printf("tam adersi: %p\n", ptam);
    printf("ptam adresi: %p\n", &ptam);
    printf("ptam icerik: %d\n", *ptam); 
}