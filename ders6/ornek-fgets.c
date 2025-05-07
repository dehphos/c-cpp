#include <stdio.h>
#include <stdlib.h>

int main(){
    char metin[20];
    printf("\n\nLütfen metni girin: ");
    fgets(metin, sizeof(metin), stdin); 
    printf("\n\n Tek tek karakterleri yazdır: ");
    for(int i = 0; i < sizeof(metin); i++){
        printf("\n%c", metin[i]);
    }
    printf("\n\n Tüm karakterleri yazdır: %s", metin);
}