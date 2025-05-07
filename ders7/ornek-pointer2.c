#include <stdio.h>

int main(){
    int *ptam, tam = 33;
    ptam = &tam;

    printf("&tam = %p\n", &tam); 
    printf("ptam = %p\n", ptam);
    printf("tam = %d\n", tam);
    printf("*ptam = %d\n", *ptam);

    *ptam = 44;

    printf("&tam = %p\n", &tam);
    printf("ptam = %p\n", ptam);
}