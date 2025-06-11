#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *p_dosya;
    char metin[50];

    // ---yazma işlemi---
    //1. dosyayı yazma moduda aç
    p_dosya = fopen("ornek.txt", "w");
    if (p_dosya == NULL) {
        printf("Dosya acilamadi!\n");
        return 1; // Dosya açılamadıysa programı sonlandır
    }
    //2. dosyaya yazma işlemi
    fprintf(p_dosya, "Merhaba Dünya!");
    fclose(p_dosya); // dosyayı kapat

    //3. okuma işlemi
    p_dosya = fopen("ornek.txt", "r");
    if (p_dosya == NULL) {
        printf("Dosya acilamadi!\n");
        return 1; // Dosya açılamadıysa programı sonlandır
    }
    //4. dosyadan okuma işlemi
    fscanf(p_dosya, "%s", metin);
    printf("Dosyadan okunan metin: %s\n", metin);
    fclose(p_dosya); // dosyayı kapat
}