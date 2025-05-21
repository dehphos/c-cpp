#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int n = 100;
    int *arr;
    // malloc ile 5 tane int'lik yer ayırıyoruz
    arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL){ // malloc işlemi başarısız olursa
        fprintf(stderr, "Bellek tahsisi başarısız! \n");
        return 1;
    }
    printf("Bellek basariyla ayrildi! \n");

    for(int i = 0; i < n; i++){
        arr[i] = i+1;
        printf("%d", arr[i]);
    }

    printf("\n");

    // Belleği serbest bırakıyoruz
    free(arr);
    arr = NULL; // işaretçiyi NULL yapıyoruz
    printf("Bellek serbest birakildi! \n");

}