#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int veri[100];

    fp = fopen("veri.txt", "wb"); // binary write modu
    if (fp != NULL) {
        fwrite(veri, sizeof(int), 100, fp); // 100 adet int yaz
        fclose(fp); // dosyayı kapat
    }
}

/*
fread(ptr, boyut, adet, stream)
fwrite(ptr, boyur,adet,strem)
*/