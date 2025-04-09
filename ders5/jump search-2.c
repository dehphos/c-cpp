/*      lineer search       */

#include <stdio.h>

int main(){
    int dizi[] = {1,3,5,7,9,11,13,15,17};
    int boyut = sizeof(dizi)/sizeof(dizi[0]);
    int aranan;
    int indeks = -1;
    int adim = 3;
    int blokBaslangici = 0;
    int blokSon = adim < boyut ? adim : boyut;

    printf("\n\n Dizi elemanlari:\n ");
    for(int j = 0; j<boyut; j++){
        printf("%d\t ", dizi[j]);
    }
    printf("\n\nAranacak elemani giriniz: ");
    scanf("%d", &aranan);


    while(dizi[blokSon-1]<aranan){
        blokBaslangici = blokSon;
        adim+=3;
        blokSon = adim < boyut ? adim : boyut;
        if(blokBaslangici >= boyut){
            indeks = -1;
            break;
        }
    }
    for(int i = blokBaslangici; i<blokSon; i++){
        if(dizi[i] == aranan){
            indeks = i;
            break;
        }
    }
    if(indeks != -1){
        printf("\n\n%d %d. indekste bulundu.\n", aranan, indeks);
    }else{
        printf("%d bulunamadi.\n", aranan);
    }
}