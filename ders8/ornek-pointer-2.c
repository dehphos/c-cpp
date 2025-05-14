#include <stdio.h>
#include <stdlib.h>
void f1(int);
void f2(int *);

int main(){
    int a = 55;
    printf("\n\ndeğer: %d\n", a);
    int *p = &a;
    f1(a);
    printf("f1 den sonra değer: %d\n", a);
    f2(p);
    printf("f2 den sonra değer: %d\n", a);

}

void f1(int x){
    x = 66;
    printf("f1 içindeki değer: %d\n", x);
}
void f2(int *x){
    *x = 77;
    printf("f2 içindeki değer: %d\n", *x);
}