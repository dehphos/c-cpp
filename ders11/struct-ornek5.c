#include <stdio.h>
#include <stdlib.h>

int main(){


    //struct ve içinde struct kullanımı

    struct dogum_tarihi {
        int gun;
        int ay;
        int yil;
    };
    struct sahis_bilgileri_2{
        char isim[40];
        int boy;
        struct dogum_tarihi tarih;
    };
    struct sahis_bilgileri_2 kisi[3] = {
        {"Ali", 170, {17,02,1967}},
        {"Veli", 178, {14,4,1980}},
        {"Cenk", 176, {04,11,1983}}
    };

    //yazdırma işlemi

    for(int i = 0; i < 3; i++){ 
        printf("-------------------------\n");
        printf("Kayıt no.: %d\n", i + 1);
        printf("Ad %s\n", kisi[i].isim);
        printf("Boy: %d\n", kisi[i].boy);
        printf("Doğum tarihi: %d-%d-%d\n", kisi[i].tarih.yil, kisi[i].tarih.ay, kisi[i].tarih.gun);
}
        printf("-------------------------\n");
}