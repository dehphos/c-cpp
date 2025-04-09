/*  lineer arama  */
#include <stdio.h>

int main(){
    int dizi[] = {15,8,42,23,4,16};
    int aranan;
    int indeks = -1;

    printf("\n\n Dizi elemanlari: ");
    for(int j = 0; j<6; j++){
        printf("%d ", dizi[j]);
    }
    
    printf("\n\nAranacak elemani giriniz: ");
    scanf("%d", &aranan);
    for(int i = 0; i<6; i++){
        if(dizi[i] == aranan){
            indeks = i;
            break;
        }
    }

    if(indeks != -1){
        printf("%d %d. indekste bulundu.\n",aranan, indeks);
    }else{
        printf("%d bulunamadi.\n", aranan);
    }
}