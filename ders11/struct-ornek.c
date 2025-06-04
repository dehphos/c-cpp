#include <stdio.h>
#include <stdlib.h>

int main(){
    struct{
        int yıl;
        int ay;
        int gun;
    }siz, kardes, arkadas;

    printf("Kendinizin doğum tarihini giriniz (yıl ay gün): ");
    scanf("%d %d %d", &siz.yıl, &siz.ay, &siz.gun);
    printf("Kardeşinizin doğum tarihini giriniz (yıl ay gün): ");
    scanf("%d %d %d", &kardes.yıl, &kardes.ay, &kardes.gun);
    printf("Arkadaşınızın doğum tarihini giriniz (yıl ay gün): ");
    scanf("%d %d %d", &arkadas.yıl, &arkadas.ay, &arkadas.gun);

    printf("Kendinizin doğum tarihi: %d-%d-%d\n", siz.yıl, siz.ay, siz.gun);
    printf("Kardeşinizin doğum tarihi: %d-%d-%d\n", kardes.yıl, kardes.ay, kardes.gun);
    printf("Arkadaşınızın doğum tarihi: %d-%d-%d\n", arkadas.yıl, arkadas.ay, arkadas.gun);

}