/* Bir fonksiyonun adresini öğrenme*/
#include <stdio.h>

int f(int n){
    int f=1, i;
    for(i=1;i<n;i++){
        f*=i;
        return f;
    }
}

int main(){
    int (*pf)(int); // fonksiyon pointer'ı tanımla
    pf = &f; // fonksiyon adresini ata

    printf("\nfonksiyonun adresi : %p\n", pf); // fonksiyon adresini yazdır
    printf("fonksiyonun adresi : %p\n", &f); // fonksiyon adresini yazdır
}
