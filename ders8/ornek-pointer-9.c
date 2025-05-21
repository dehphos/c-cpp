#include <stdio.h>
#include <stdlib.h>

int main(){
    char kar = 'a';
    int tam = 66;
    double gercek = 1.2;
    void *veri;
    veri = &kar; // void pointer'a char adresini ata
    printf("veri -> kar: veri %c karakter değerini gösteriyor\n", *(char*)veri); // void pointer'ı char pointer'a çevirip yazdır
    veri = &tam; // void pointer'a int adresini ata
    printf("veri -> tam: veri %d tam sayı değerini gösteriyor\n", *(int*)veri); // void pointer'ı int pointer'a çevirip yazdır
    veri = &gercek; // void pointer'a double adresini ata
    printf("veri -> gercek: veri %lf double değerini gösteriyor\n", *(double*)veri); // void pointer'ı double pointer'a çevirip yazdır
}