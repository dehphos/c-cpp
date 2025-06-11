#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 2){
        FILE *Dosya = fopen(argv[1], "r");
        if(!Dosya){
            printf("HATA..\n Acilamayan dosya : %s\n", argv[1]);
            printf("Dosya adi yanlis veya dosya yok...");
            exit(1);
        }
        printf("Dosya okunuyor...\n");
        printf("_________________________\n");
        printf("______DOSYA_ICERIGI______\n");
        printf("_________________________\n");

        int ch = fgetc(Dosya);
        while (ch != EOF){
            putchar(ch);
            ch = fgetc(Dosya);
        }

        printf("\n_________________________\n");
        printf("Dosya okuma islemi tamamlandi...\n");
    }else if(argc == 1){
        printf("Lutfen dosya adini parametre olarak giriniz.\n");
        printf("Ornek: %s dosya.txt\n", argv[0]);
    }else{
        printf("Lutfen sadece bir dosya adi giriniz.\n");
        printf("Ornek: %s dosya.txt\n", argv[0]);
    }
}