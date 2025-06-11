#include <stdio.h>
#include <stdlib.h>

// --- 1) Move enum and typedef to file scope so both main() and durum_yazdir() see them:
enum MotorDurumu {
    DURDURULDU,
    AKTIF,
    ARIZA
};

typedef struct servoMotor {
    char             motorAdi[10];
    int              aci;
    float            hiz;
    enum MotorDurumu durum;
} Motor;

// --- 2) Prototype for durum_yazdir (array of Motor):
void durum_yazdir(Motor motor[]);

int main() {
    // 3) Now we can initialize the array in main:
    Motor Servo_motorlar[3] = {
        { "Motor1",   0,   0.0f, DURDURULDU },
        { "Motor2",  90,   1.5f,    AKTIF   },
        { "Motor3", 180,   2.0f,    ARIZA   }
    };

    // 4) Call the printer function (no prototype errors now):
    durum_yazdir(Servo_motorlar);

    return 0;
}

// --- 5) Definition of durum_yazdir; signature matches the prototype:
void durum_yazdir(Motor motor[]) {
    int    i;
    Motor *ptr;

    // Loop from motor[0] up to motor[2]:
    for (i = 0, ptr = &motor[0]; ptr <= &motor[2]; i++, ptr++) {
        // These lines must be inside the loop’s braces:
        printf(
            "\nMotor numarası: %d\n"
            "isim: %s\n"
            "aci = %d\n"
            "hiz = %.1f\n",
            i + 1,
            ptr->motorAdi,
            ptr->aci,
            ptr->hiz
        );

        switch (ptr->durum) {
            case DURDURULDU:
                printf("durum: Durdu\n");
                break;
            case AKTIF:
                printf("durum: Aktif\n");
                break;
            case ARIZA:
                printf("durum: Arızalı\n");
                break;
            default:
                printf("durum: Bilinmiyor\n");
        }
    }
}
