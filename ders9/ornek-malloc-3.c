//memory leak kodu

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr;
    int n = 500;
    while(1){
    ptr = (int *)malloc(n * sizeof(int)); 
    if(ptr == NULL){ // malloc işlemi başarısız olursa
        printf("Bellek tahsisi başarısız! \n");
    }

    
}}

/*bellek hatalarını görebilmek ve giderebilmek için Valgrind(memcheck), AddressSanitizer(ASan) gibi araçlar kullanılır. */