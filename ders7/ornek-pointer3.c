#include <stdio.h>
#include <stdlib.h>

int main(){
char *pk, k = 'a';
int *pt, t = 22;
double *pg, g= 5.5;
pk = &k; pt = &t; pg = &g;
printf("önceki adresler: \t k:%p \t t:%p \t g:%p\n", pk, pt, pg);
pk--;
pt++;
pg--;
printf("sonraki adresler: \t k:%p \t t:%p \t g:%p\n", pk, pt, pg);
}

/*  XOR SHIFTING -- BITWISE ARYTHMETHIC  ÇALIŞ*/