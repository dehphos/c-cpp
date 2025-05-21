#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int n1 = 5, n2 = 10;
    arr = (int*)malloc(n1*sizeof(int)); 
    if(arr == NULL) return 1;
    printf("%d elemanlı dizi için bellek tahsis edildi.\n", n1);
    for(int i = 0; i< n1; i++) arr[i] = i;
    //belleği n2 elemana genişlet
    int *temp_arr = (int*)realloc(arr, n2*sizeof(int));
    if(temp_arr == NULL){
        fprintf(stderr,"Bellek tahsisi başarısız! \n");
        free(arr); // eski belleği serbest bırak
        return 1;}
    printf("eski bellek adresi: %p\n", arr); 
    printf("yeni bellek adresi: %p\n", temp_arr);
    // yeni bellek adresini arr işaretçisine atıyoruz
    arr = temp_arr;
    printf("%d elemanlı dizi için bellek genişletildi.\n", n2);
    //eski veriler korunur, yeni eleanlar tanımsızdır.
    for(int i = n1; i<n2; i++)arr[i] = i*10;
    for(int i = 0; i<n2; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr); // belleği serbest bırakıyoruz
    arr = NULL; // işaretçiyi NULL yapıyoruz
    return 0; 
}