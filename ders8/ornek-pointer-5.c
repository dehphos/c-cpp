/*geri dönüş değeri gösterici olan fonksiyon*/
#include <stdio.h>

double* maxAddr(double a[], int boyut){
    double en_buyuk_deger = a[0];
    double *en_buyuk_adres = &a[0];
    int i;
    for(i = 1; i < boyut; i++){
        if(a[i] > en_buyuk_deger){
            en_buyuk_deger = a[i];
            en_buyuk_adres = &a[i];
        }
    }
    return en_buyuk_adres;
}

int main(){
    double x[6] = {1.2, 3.4, 7.6, 5.8, -9.0, -11.12};
    double *p;
    int k;

    //indis, dizi ve adresleri yazdır
    printf("indis\t\tdizi\t\tadres\n");
    for(k = 0; k < 6; k++){
        printf("%d\t\t%.2f\t\t%p\n", k, x[k], &x[k]);
    }

    p = maxAddr(x, 6);

    printf("en büyük değer : %lf \n", *p);
    printf("en büyük değer adresi : %p \n", p);
    printf("en büyük değer indis : %d \n", (int)(p - &x[0])); // bulunan adresi dizinin başlangıç adresinden çıkararak indis hesapla
}