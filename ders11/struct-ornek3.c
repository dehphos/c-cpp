#include <stdio.h>
#include <stdlib.h>

int main(){
    struct sahis_bilgileri {
        char isim[40];
        int boy;};

        struct sahis_bilgileri kisi_1;
        struct sahis_bilgileri kisi_2;


        strcpy(kisi_1.isim, "AHMET");
        kisi_1.boy = 170;
        strcpy(kisi_2.isim, "MEHMET");
        kisi_2.boy = 176;
}