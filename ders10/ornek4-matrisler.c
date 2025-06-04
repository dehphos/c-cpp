#include <stdio.h>
#include <stdlib.h>

int main(){
    int satirSayisi = 3, sutunSayisi = 4;
    int **ikiBoyutluDizi;
    ikiBoyutluDizi = (int**)malooc(satirSayisi * sizeof(int*));
    if(ikiBoyutluDizi == NULL){
        fprintf(stderr, "Bellek tahsis hatasi!\n");
        return 1;
    }
    for(int i = 0; i < satirSayisi; i++){
        ikiBoyutluDizi[i] = (int*)malloc(sutunSayisi * sizeof(int));
        if(ikiBoyutluDizi[i] == NULL){
            fprintf(stderr, "Bellek tahsis hatasi!\n");
            for(int j = 0; j < i; j++) {
                free(ikiBoyutluDizi[j]);
            }
            free(ikiBoyutluDizi);
            return 1;
        }
    }
}