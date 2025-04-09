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

    while(son-bas>1){
        int orta = bas + (son-bas)/2;
        if (dizi[orta]<= aranan){
            bas = orta;
        }else{
            son = orta;
        }
    }
    if(dizi[bas] == aranan){
        indeks = bas;
    }else if(dizi[son] == aranan){
        indeks = son;
    }else{
        indeks = -1;
    }   

    if(indeks != -1){
        printf("\n\n%d %d. indekste bulundu.\n", aranan, indeks);
    }else{
        printf("%d bulunamadi.\n", aranan);
    }

}