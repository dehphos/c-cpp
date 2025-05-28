#include <stdio.h>
#include <stdlib.h>

int main(){
    int s1[] = {1, 2, 3, 4, 5, 6};
    int s2[] = {10,20,30,40,50,60};
    int s3[] = {11,22,33,44,55,66};

    int *ptr1, *ptr2, *ptr3;
    ptr1 = s1; // s1 dizisinin başlangıç adresini ptr1'e atar
    ptr2 = s2; // s2 dizisinin başlangıç adresini ptr2'ye atar
    ptr3 = s3; // s3 dizisinin başlangıç adresini ptr3'e atar

    


    for(int i = 0; i < sizeof(s1)/sizeof(int); i++){
        printf("%d ",*(ptr1+i));
        printf("%d ",*(ptr2+i));
        printf("%d \n",*(ptr3+i));

    }

}