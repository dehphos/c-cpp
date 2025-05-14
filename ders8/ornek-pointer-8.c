#include <stdio.h>

int carpGonder(int a, int b);



int main(){
    int dizi[5]={10,20,30,40,50};

    printf("\nDizi elemanları çarpımı: %d\n" , carpGonder(dizi[0], dizi[1]));
    int (*ptrcarpGonder)(int, int);
    ptrcarpGonder = &carpGonder; // fonksiyon adresini ptr'ye ata
    printf("pointerin adresi : %p\n", ptrcarpGonder); // fonksiyon adresini yazdır
    int carpim = (*ptrcarpGonder)(dizi[0], dizi[3]); // fonksiyonu çağır
    printf("pointer ile çarpım sonucu : %d\n", carpim); // çarpım sonucunu yazdır
    return 0;
}

int carpGonder(int a, int b){
    return a*b;
}