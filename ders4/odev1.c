#include <stdio.h>

int main(){
    int sayac, baslangic, bitis;
    int toplam = 0;

    printf("Baslangic degerini giriniz: ");
    scanf("%d", &baslangic);

    printf("Bitis degerini giriniz: ");
    scanf("%d", &bitis);

    if(baslangic < bitis){
        for(sayac = baslangic; sayac <= bitis; sayac++ ) if(sayac % 2 != 0) toplam += sayac;
        printf("Toplam: %d\n", toplam);
    }else printf("Baslangic degeri bitis degerinden buyuk olamaz!!!\n");
    
    return 0;
}