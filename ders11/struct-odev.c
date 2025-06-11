#include <stdio.h>
#include <stdlib.h>

int main(){


    enum CINSIYET {KADIN, ERKEK};

   struct dogum_tarihi {
        int gun;
        int ay;
        int yil;
    };
    struct sahis_bilgileri{
        char isim[40];
        int boy;
        enum CINSIYET cinsiyet ;
        struct dogum_tarihi tarih;
    };

    struct sahis_bilgileri *ptr;

    struct sahis_bilgileri kisi[3] = {
        {"Efe Batman", 170, ERKEK, {17,02,1967}},
        {"Veli", 178, ERKEK, {14,4,1980}},
        {"Ayse", 176, KADIN, {04,11,1983}}
    };


    //yazdırma işlemi
    int i;
    for(i = 0, ptr = kisi; ptr <= &kisi[2]; i++, ptr++) {
        printf("Kayıt no.: %d\n", i + 1);
        printf("Ad %s\n", ptr->isim);
        printf("Boy: %d\n", ptr->boy);
        switch(kisi[i].cinsiyet){
            case KADIN:
                printf("Cinsiyet: Kadın\n");
                break;
            case ERKEK:
                printf("Cinsiyet: Erkek\n");
                break;
            default:
                printf("Cinsiyet: Bilinmiyor\n");
        }
        printf("Doğum tarihi: %d/%d/%d\n", ptr->tarih.yil, ptr->tarih.ay, ptr->tarih.gun);
}
}