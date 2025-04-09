#include <stdio.h>

int main(){
    printf("\n\n\n\n");  // vsc de çalıştırırken debug çıktılar ile program çıktıları karışmasın diye
    printf("Dikdörtgenin Alanını Hesaplama(float değerler ile)\n");
    printf("Dikdörtgenin bir kenarini giriniz: ");
    float kenar1;
    scanf("%f", &kenar1);
    printf("Dikdörtgenin diğer kenarini giriniz: ");
    float kenar2;
    scanf("%f", &kenar2);
    printf("Dikdörtgenin alanı: %.5f\n", (kenar1 * kenar2));
    return 0;
}