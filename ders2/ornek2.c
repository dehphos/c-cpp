#include <stdio.h>

int main(){
    int i = 1;
    i++;
    ++i;
    i += 1 + i++;
    i = i+1;
    printf("\n\n\n%d\n", i);
    return 0;
}