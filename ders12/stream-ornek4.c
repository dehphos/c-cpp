#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("veriler.dat", "wb");
    float sensor_veri[100] = {1.1,2.0,3.1,5.5};
    if (!fp) {
        perror("Dosya açılamadı");
        return 1;}
    fwrite(sensor_veri, sizeof(float), 100, fp);
}