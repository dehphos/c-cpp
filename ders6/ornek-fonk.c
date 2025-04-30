#include <stdio.h>
#include <stdlib.h>



int topla(int x, int y){
    int toplam = x + y;
    return toplam;
}
int main(){
    int sonuc;
    int a = 5;
    int b = 3;
    sonuc = topla(a, b);
    printf("\n\nToplama işlemi sonucu: %d", sonuc);
    return 0;
}

