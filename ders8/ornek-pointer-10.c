#include <stdio.h>
#include <stdlib.h>

int fKaresiTopla(int,int);

int main(int argc, char *argv[]){
    if(argc < 3){
        printf("Eksik parametre! \n");
        return(1);
    }
    else if(argc > 3){
        printf("Fazla parametre! \n");
        return(1);
    }
    else{
    int say1,say2,top;
    say1 = atoi(argv[1]);
    say2 = atoi(argv[2]);
    int (*fKaresiToplaPtr)(int,int);
    fKaresiToplaPtr = fKaresiTopla;
    top = (* fKaresiToplaPtr)(say1,say2);
    printf("toplam: %d \n", top);
    return 0;
    }
}

int fKaresiTopla(int a, int b){
    return (a*a + b*b);
}