#include <stdio.h>
#include <stdlib.h>

double ortalama(double dizi[], int n);


int main(){

        double a[] = {1.1,2.2,3.3,4.4,5.5};
        double o;
        o = ortalama(a, 5);
        printf("ortalama = %f\n", o);


}

double ortalama(double dizi[], int n){
    double *p, t = 0.0;
    int i;

    p = dizi;
    for(i=0; i<n; i++){
        t += *(p+i);
    }
    return (t/n);
}

/* diziye pointer adresi üzerinden ulaşılır ve adres 1 arttırılarak dizi taranır. 
eğer pointer verilmeseydi, ortalama fonksiyonunun içinde dizinin üzerinde yapılabilecek 
değişiklikler kaydedilmez, fonksiyona dizinin bir kopyası verilir.*/

/*          dizinin içindeki sayılara 1 ekleyerek bunu çalış         */