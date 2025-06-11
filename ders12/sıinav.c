/*
değişkenleri tamamen istenen isimlerle tanımla

main fonksiyon input çalış


*/

#include <stdio.h>
#include <stdlib.h>

typedef enum { Erkek, Kadin } Cinsiyet;
typedef struct {
    int ogrNo;
    char ad[10];
    float not;
    Cinsiyet cinsiyet;
} Ogrenci;

void ogrenciYaz(Ogrenci ogrenci, FILE *dosya);

void ogrenciOku(Ogrenci *ogrenci, FILE *dosya);

int main(){
    FILE *Dosya = fopen("Dosya.txt", "w");
    if(!Dosya){
        printf("Başarısız dosya oluşturma isteği\n");
        exit(1);
    }

    Ogrenci ogrenci;
    char karar;
    int i = 1;


    do{
        printf("%d Oğrenci numarası: \n", i);
        scanf("%d", &ogrenci.ogrNo);
        printf("%d Oğrenci adı: ", i);
        scanf("%9s", ogrenci.ad);
        printf("%d Oğrenci notu: ", i);
        scanf("%f", &ogrenci.not);
        printf("%d Oğrenci cinsiyeti (0: Erkek, 1: Kadın): ", i);
        int cinsiyet;
        scanf("%d", &cinsiyet);
        ogrenci.cinsiyet = (Cinsiyet) cinsiyet;
        ogrenciYaz(ogrenci, Dosya);
        printf("Devam etmek ister misiniz (E/e veya H/h)");
        getchar();
        scanf(" %c", &karar);
        i++;
  }while(karar == "E" || karar == "e");
  fclose(Dosya);
  printf("Kayit islemleri tamamlandi! \n");

  Dosya = fopen("Dosya.txt", "r");
  if(!Dosya){
      printf("Dosya acilamadi!\n");
      exit(1);
  }
  i=1;
  printf("Okunan ö");

}