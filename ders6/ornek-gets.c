#include <stdio.h>
#include <stdlib.h>

int main(){
    char dizi[50];
    int i;
    printf("\n\nBir kelime giriniz: ");
    gets(dizi);
    printf("\n\nDizinin boyutu: \n %d", sizeof(dizi)/sizeof(dizi[0]));

    for(i=0; i<50; i++){
        printf("\n%d. eleman: %c", i, dizi[i]);
    };
    printf("\n\n");
}