/*      binary search       */
#include <stdio.h>

int main(){
    int dizi[] = {2,4,5,10,14,18,20};
    int boyut = sizeof(dizi)/sizeof(dizi[0]);
    int aranan;
    int indeks = -1;
    int bas = 0;
    int son = boyut-1;

    printf("\n\n Dizi elemanlari:\n ");
    for(int j = 0; j<boyut; j++){
        printf("%d\t ", dizi[j]);
    }
    printf("\n\nAranacak elemani giriniz: ");
    scanf("%d", &aranan);
    while(bas <= son){
        int orta = (bas+son)/2;
        if(dizi[orta] == aranan){
            indeks = orta;
            break;
        }else if (dizi[orta]< aranan){
            bas = orta + 1;
        }else{
            son = orta - 1;
        }
    }

    if(indeks != -1){
        printf("\n\n%d %d. indekste bulundu.\n", aranan, indeks);
    }else{
        printf("%d bulunamadi.\n", aranan);
    }
}