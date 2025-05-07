#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int topla(int n, ...){
    va_list ap;
    int top = 0;

    va_start(ap, n);
    for(int i = 0; i<n; i++){
        top += va_arg(ap, int);
    }
    va_end(ap);
    return top;
}

int main(){
    int sonuc;
    sonuc = topla(5, 5, 3, 4, 2 ,1);
    printf("\n\nToplama işlemi sonucu: %d", sonuc);
    return 0;
}