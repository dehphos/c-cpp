#include <stdio.h>
#include <stdlib.h>

int main(){
    struct{
        char isim[50];
        int boy;
        struct{
            int yıl;
            int ay;
            int gun;
        } dogum_bilgileri;
    }kisi;

    printf("\nKişinin ismini giriniz: ");
    scanf("%s", kisi.isim);
    printf("\nKişinin boyunu giriniz (cm): ");
    scanf("%d", &kisi.boy);
    printf("\nKişinin doğum tarihini giriniz (yıl ay gün): ");
    scanf("%d %d %d", &kisi.dogum_bilgileri.yıl, &kisi.dogum_bilgileri.ay, &kisi.dogum_bilgileri.gun);

    printf("Kişinin ismi: %s\n", kisi.isim);
    printf("Kişinin boyu: %d cm\n", kisi.boy);
    printf("Kişinin doğum tarihi: %d-%d-%d\n", kisi.dogum_bilgileri.yıl, kisi.dogum_bilgileri.ay, kisi.dogum_bilgileri.gun);
    return 0;
    
}