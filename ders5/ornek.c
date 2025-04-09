#include <stdio.h>
#define eleman_sayisi 100000


int main(){
    while(1){
    printf("\n\n");
    int ornekdizi[eleman_sayisi];

    for (int i = 0; i<eleman_sayisi; i++){
        ornekdizi[i] = i * 3;
    }

    for (int i = 0; i<eleman_sayisi; i++){
        printf("\n%d. ci eleman: %d", i, ornekdizi[i]);
    }}
}