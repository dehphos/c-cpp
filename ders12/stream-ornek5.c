#include <stdio.h>
#include <stdlib.h>

typedef enum{ SICAKLIK, BASINC, NEM } SensorTipi;

typedef struct{
    SensorTipi tip;
    float deger;
} SensorVerisi;

int main(){

    SensorVerisi veriler[] = { {SICAKLIK, 23.5 }, { BASINC, 1.02 }, { NEM, 45.0 } };

    FILE *fp = fopen("sensorlog.bin", "wb");
    if(fp){
        fwrite(veriler, sizeof(SensorVerisi), 3, fp);
        fclose(fp);
    }
    return 0;
}

