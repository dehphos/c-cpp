#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int minimum_bul(int arg_sayac, ...){
    int i;
    int min ,a;

    va_list ap;
    va_start(ap, arg_sayac);
    min = va_arg(ap, int);
}