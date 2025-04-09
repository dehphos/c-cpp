#include <stdio.h>



int main() {

    float uzunluk, genislik, alan;
    printf("Uzunlugu giriniz: ");
    scanf("%f", &uzunluk) ;
    printf("Genisligi giriniz: ");
    scanf("%f", &genislik);
    alan = uzunluk * genislik;
    printf("Dikdörtgenin alan1: %.2f\n", alan);
    return 0;    
}