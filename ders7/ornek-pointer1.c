#include <stdlib.h>
#include <stdio.h>

int main(){
    int a = 5;
    int *p = &a; // p is a pointer to the address of a
    printf("\n\n\n");
    printf("a: %d \n", a); // prints the value of a
    printf("&a: %p \n", &a); // prints the address of a
    printf("p: %p \n", p); // prints the value of p (address of a)
    printf("*p: %d \n", *p); // prints the value pointed to by p (value of a)
    return 0;
}