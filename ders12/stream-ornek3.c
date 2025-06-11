#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp = fopen("sicaklik.txt", "w");
    if(!fp){
        perror("dosya açılamadı");
        return 1;
    }

    float sicaklik[] = {25.1,26.3,27,25.7};
    for(int i = 0; i<4; i++){
        fprintf(fp, "Sıcaklık %.2f\n", sicaklik[i]);
    }
    fclose(fp);
    return 0;
}