//motor sıcaklığına göre devir düşürme

#include <stdio.h>

int main(){
    float motorDevriYuzde = 0.5;
    printf("\n\n\n\nmotor devri yuzde: %.2f\n", motorDevriYuzde);
 while (1){
    int sic = 2;
    float sicaklik = 0.0;
    printf("sicaklik değerini giriniz: ");
    scanf("%f", &sicaklik);

    //koşul ifadeleri
    if(sicaklik > 50.0){
        sic = 1;
    }else if(sicaklik >= 20.0 && sicaklik <= 50.0){
        sic = 2;
    }else if(sicaklik < 20.0 && sicaklik > 0.0){  
        sic = 3;
    }else{
        sic = 4;
    }
    switch(sic){
        case 1:
            printf("sicaklik cok yüksek motor yavaslatiliyor\n");
            motorDevriYuzde *= 0.8;
            printf("motor devri: %.2f\n", motorDevriYuzde);
        case 2:
            printf("sicaklik normal motor devri sabit\n");
            motorDevriYuzde = 0.5;
            printf("motor devri: %.2f\n", motorDevriYuzde);
        case 3:
            printf("sicaklik cok düşük motor bekleme moduna aliniyor\n");
            motorDevriYuzde = 0.0;
            printf("motor devri: %.2f\n", motorDevriYuzde);
        default:
            printf("girilen değer beklenen veri araliginda degil\n");
    }}

    return 0;}