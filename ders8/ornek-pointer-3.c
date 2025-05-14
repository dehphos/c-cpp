#include <stdio.h>
#include <stdlib.h>

int main(){
    int dizi[3] = {1, 2, 3};
    int *p = &dizi;
    for (int i = 0; i < 3; i++){
        (*p)+i = i;
    }
    printf("dizi[0]: %d, dizi[1]: %d, dizi[2]: %d\n", dizi[0], dizi[1], dizi[2]);
    return 0;
}

/*---çalışmıyor---*/