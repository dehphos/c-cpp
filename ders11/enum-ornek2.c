#include <stdio.h>
#include <stdlib.h>

int main(){
    enum MotorDurumu{
        Motor_Durdu = 0,
        Motor_Calisiyor = 1,
        Motor_Ariza = 2
    };

    void motorKontrol(enum MotorDurumu durum){
        switch(durum) {
            case Motor_Durdu:
                printf("Motor durdu.\n");
                break;
            case Motor_Calisiyor:
                printf("Motor çalışıyor.\n");
                break;
            case Motor_Ariza:
                printf("Motor arızalı!\n");
                break;
            default:
                printf("Bilinmeyen motor durumu!\n");
        }
    };

    enum MotorDurumu motor = Motor_Calisiyor;
    motorKontrol(motor);
}