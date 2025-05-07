#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int toplam;
    if(argc<3){
        printf("eksik parametre! \n");
        return(1);
    }
    else if(argc>3){
        printf("fazla parametre! \n");
        return(1);
    }
    else{
        toplam = atoi(argv[1]) + atoi(argv[2]);
        printf("toplam: %d \n", toplam);
        return 0;
    }
}