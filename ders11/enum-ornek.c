#include <stdio.h>
#include <stdlib.h>

int main(){
    enum SensorTipi{
        SICAKLIK = 1,   //0001
        BASINC = 2,     //0010
        NEM = 4         //0100
    };

    enum SensorTipi aktifSensor = SICAKLIK | NEM;
                                //  0001 | 0100 = 0101 = 5
    printf("Aktif sensörler: %d\n", aktifSensor);

}