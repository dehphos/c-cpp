#include <stdio.h>
#include <stdlib.h>

//birden fazla değer aynı bellek alanını kullanabilir

int main(){
    union SensorVerisi{
        int sicaklik;
        float nem;
        char durum;
    };
    union SensorVerisi veri;
    veri.sicaklik = 25; // sicaklik verisi atandı
    printf("Sıcaklık: %d\n", veri.sicaklik); //25
    veri.nem = 45.5; // nem verisi atandı
    printf("Nem: %.2f\n", veri.nem); //45.5
    printf("Sıcaklık: %d\n", veri.sicaklik); //çöp değer, çünkü paylaşılan bellek alanına nem yazıldı
}