/* pointer atitmatiği */
#include <stdio.h>
#include <stdlib.h>

int main(){
    char kar = 'a';
    int tam = 5;
    long double ger = 3.14;
    char *pKar = &kar;
    int *pTam = &tam;
    long double *pGer = &ger;
    printf("\nkar: %c\t\t pkar: %p\t pkar+1: %p,\t adım: %d", *pKar, pKar, pKar+1, ((pKar+1)-pKar)*sizeof(*pKar));
    printf("\ntam: %d\t\t ptam: %p\t ptam+1: %p,\t adım: %d", *pTam, pTam, pTam+1, ((pTam+1)-pTam)*sizeof(*pTam));
    printf("\nger: %f\t pger: %p\t pger+1: %p, \t adım: %d", *pGer, pGer, pGer+1, ((pGer+1)-pGer)*sizeof(*pGer));
    return 0;
}