#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)malloc(20 * sizeof(int)); // malloc ile 20 tane int'lik yer ayırıyoruz
    if(ptr == NULL){ // malloc işlemi başarısız olursa
        printf("Bellek tahsisi başarısız! \n");
        return 1;
    }
    for(int i = 0; i < 20; i++){
        printf("\nindex: %d, \t\t", i);
        printf("%d",ptr[i]); // ptr dizisinin her elemanına değer atıyoruz
    }
}