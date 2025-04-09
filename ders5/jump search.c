/*      jump search     */
/*      sıralı dizilerde aramayı kolaylaştırmak için kullanılır       */
#include <stdio.h>
#include <math.h>

int main(){
    int dizi[] = {1,3,5,7,9,11,13,15,17};
    int boyut = sizeof(dizi)/sizeof(dizi[0]);
    int aranan;
    int indeks = -1;
    int adim = floor(sqrt(boyut));
    int onceki_adim = 0;

    printf("\n\n Dizi elemanlari:\n ");
    for(int j = 0; j<boyut; j++){
        printf("%d\t ", dizi[j]);
    }
    printf("\n\nAranacak elemani giriniz: ");
    scanf("%d", &aranan);


    for(int i=0; i<boyut; i+=adim){
        if(dizi[i] >= aranan){
            onceki_adim = i;
            continue;
        }else{
            for(int j=onceki_adim; j<boyut; j++){
                if(dizi[j] == aranan){
                    indeks = j;
                    break;
                }
            }
        }
    }

    if(indeks != -1){
        printf("%d %d. indekste bulundu.\n", aranan, indeks);
    }else{
        printf("%d bulunamadi.\n", aranan);
    }

}