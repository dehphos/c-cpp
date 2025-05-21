/* malloc ile benzer. calloc(size_t num, size_t size) olarak kullanılır. num tane size büyüklüğünde memory tahsis eder. !!!belleğin eski değerini sıfırlar!!!*/

#include <stdio.h>
#include <stdlib.h>

int main(){
int n = 5;
int *int_array;
int_array = (int *)calloc(n, sizeof(int)); // calloc ile 5 tane int'lik yer ayırıyoruz
if(int_array == NULL){ // malloc işlemi başarısız olursa
    fprintf(stderr, "Bellek tahsisi başarısız! \n");
    return 1;
}
printf("\ncalloc ile %d adet integer için bellek basariyla ayrildi ve sifirlandi! \n", n);
//belleğin sıfırlandığını kotrol et 
printf("başlangıç değerleri: \n");
for(int i = 0; i < n; i++){
    printf("%d ", int_array[i]);
}
printf("\n");

//diziye değer atıyoruz

for(int i = 0; i < n; i++){
    int_array[i] = (i+1)*10;
}

printf("yeni değerler: \n");

for(int i = 0; i < n; i++){
    printf("%d ", int_array[i]);
}
printf("\n");
// Belleği serbest bırakıyoruz

free(int_array);
int_array = NULL; // işaretçiyi NULL yapıyoruz
return 0;
}