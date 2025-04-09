//motor sıcaklığına göre devir düşürme

#include <stdio.h>

int main(){
    float motorDevriYuzde = 0.5;
    printf("\n\n\n\nmotor devri yuzde: %.2f\n", motorDevriYuzde);
 while (1){
    float sicaklik = 0.0;
    printf("sicaklik değerini giriniz: ");
    scanf("%f", &sicaklik);

    //koşul ifadeleri
    if(sicaklik > 50.0){
        printf("sicaklik cok yüksek motor yavaslatiliyor\n");
        motorDevriYuzde *= 0.8;
        printf("motor devri: %.2f\n", motorDevriYuzde);
    }else if(sicaklik >= 20.0 && sicaklik <= 50.0){
        printf("sicaklik normal motor devri sabit\n");
        motorDevriYuzde = 0.5;
        printf("motor devri: %.2f\n", motorDevriYuzde);
    }else{
        printf("sicaklik cok düşük motor bekleme moduna aliniyor\n");
        motorDevriYuzde = 0.0;
        printf("motor devri: %.2f\n", motorDevriYuzde);
    }
    }

    return 0;}