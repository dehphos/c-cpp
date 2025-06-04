#include <stdio.h>
#include <stdlib.h>

int main(){


    //struct ve pointer kullanımı

   struct dogum_tarihi {
        int gun;
        int ay;
        int yil;
    };
    struct sahis_bilgileri{
        char isim[40];
        int boy;
        struct dogum_tarihi tarih;
    };

    struct sahis_bilgileri *ptr;

    struct sahis_bilgileri kisi[3] = {
        {"Ali", 170, {17,02,1967}},
        {"Veli", 178, {14,4,1980}},
        {"Cenk", 176, {04,11,1983}}
    };


    //yazdırma işlemi
    int i;
    for(i = 0, ptr = kisi; ptr <= &kisi[2]; i++, ptr++) {
        printf("-------------------------\n");
        printf("Kayıt no.: %d\n", i + 1);
        printf("Ad %s\n", ptr->isim);
        printf("Boy: %d\n", ptr->boy);
        printf("Doğum tarihi: %d-%d-%d\n", ptr->tarih.yil, ptr->tarih.ay, ptr->tarih.gun);
}
        printf("-------------------------\n");
}