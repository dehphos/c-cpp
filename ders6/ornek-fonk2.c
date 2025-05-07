#include <stdio.h>
#include <stdlib.h>

int factorial(int x){
    int a;
    if(x >= 1){
    a = x*factorial(x-1);
    return a;}
    else{return 1;}
}


int main(){
    int sonuc, girdi;
    printf("\n\nFaktöriyelini almak istediğiniz sayıyı giriniz: ");
    scanf("%d", &girdi);
    sonuc = factorial(girdi);
    printf("\n\nFaktöriyel sonucu: %d", sonuc);
    return 0;
}

