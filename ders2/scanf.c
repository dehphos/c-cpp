#include <stdio.h>

int main() {
    int sayi;
    float pi;
    char harf;

    printf("\n\nBir sayi giriniz: ");
    scanf("%d", &sayi);

    printf("Bir pi sayisi giriniz: ");
    scanf("%f", &pi);

    printf("Bir harf giriniz: ");
    scanf(" %c", &harf);

    printf("Girdiginiz sayi: %d\n", sayi);
    printf("Girdiginiz pi sayisi: %f\n", pi);
    printf("Girdiginiz harf: %c\n", harf);
    return 0;
}