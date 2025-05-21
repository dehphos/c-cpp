#include <stdio.h>
#include <stdlib.h>

int main(){
    char *arr;
    int n1 = 5, n2 = 10;
    arr = (char*)malloc(n1*sizeof(char)); 
    if(arr == NULL) return 1;
    printf("%d eleman için bellek tahsis edildi.\n", n1);
    for(int i = 0; i< n1; i++){
        arr[i] = 'A' + i;
    }
    char *temp_arr = (char*)realloc(arr, n2*sizeof(char));
    if(temp_arr == NULL){
        fprintf(stderr,"Bellek tahsisi başarısız! \n");
        free(arr); // eski belleği serbest bırak
        return 1;}
    arr = temp_arr;
    printf("%d elemanlı dizi için bellek genişletildi.\n", n2);
    for(int i = n1; i<n2; i++){
        arr[i] = arr[n1-1] + (i-n1)+1;
    }
    for(int i = 0; i<n2; i++) printf("%c ", arr[i]);
    printf("\n");
    free(arr); // belleği serbest bırakıyoruz
    arr = NULL; // işaretçiyi NULL yapıyoruz
    return 0; 
}