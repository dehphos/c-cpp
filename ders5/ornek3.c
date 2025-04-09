/*  lineer arama */
#include <stdio.h>

int main(){
    int dizi[] = {15,8,42,23,4,16};
    int aranan = 23;
    int indeks = -1;

    for(int i = 0; i<6; i++){
        if(dizi[i] == aranan){
            indeks = i;
            break;
        }
    }

    if(indeks != -1){
        printf("Aranan eleman %d. indekste bulundu.\n", indeks);
    }else{
        printf("Aranan eleman bulunamadi.\n");
    }
}