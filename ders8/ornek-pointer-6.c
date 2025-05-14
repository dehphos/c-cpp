#include <stdio.h>

void func(int);

void main(){
    void (*fp)(int);
    fp = func; // fonksiyon adresini fp'ye ata. fonksiyon direk çağırıldığında pointer adresi verdiğinden & işaretine gerek kalmaz
    (*fp)(5); // fp'yi çağır
    fp(10); // fp'yi çağır
    
}

void func(int arg){
    printf("\n%d\n", arg);
}

