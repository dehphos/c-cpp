#include <stdio.h>
#include <stdlib.h>

int main(){
    
    printf("char\t\t: %d bit\n", sizeof(char) * 8);
    printf("short\t\t: %d bit\n", sizeof(short) * 8);
    printf("int\t\t: %d bit\n", sizeof(int) * 8);
    printf("long\t\t: %d bit\n", sizeof(long) * 8);
    printf("unsigned char\t: %d bit\n", sizeof(unsigned char) * 8);
    printf("unsigned short\t: %d bit\n", sizeof(unsigned short) * 8);
    printf("unsigned int\t: %d bit\n", sizeof(unsigned int) * 8);
    printf("unsigned long\t: %d bit\n", sizeof(unsigned long) * 8);
    printf("float\t\t: %d bit\n", sizeof(float) * 8);
    printf("double\t\t: %d bit\n", sizeof(double) * 8);
    printf("long double\t: %d bit\n", sizeof(long double) * 8);
    printf("void\t\t: %d bit\n", sizeof(void) * 8);
    printf("char*\t\t: %d bit\n", sizeof(char*) * 8);
    printf("int*\t\t: %d bit\n", sizeof(int*) * 8);
    printf("void*\t\t: %d bit\n", sizeof(void*) * 8);
    return 0;

}

