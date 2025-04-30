#include <stdio.h>
#include <stdlib.h>

int main(){
    char metin[20];
    printf("\n\nBir kelime giriniz: ");
    fgets(metin, sizeof(metin), stdin); 
    printf("\n\n girdiğiniz metin: %s", metin);
}