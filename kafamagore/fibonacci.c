#include <stdlib.h>
#include <stdio.h>
#include <sys\timeb.h>
#include <windows.h>
#define MAX 200000

int main(){
    unsigned long long int arr[MAX] = {0};
    arr[0] = 1;
    arr[1] = 1;
    struct timeb start;
    ftime(&start);
    int time = start.millitm;
    int times = start.time;
    ftime(&start);
    while(time != start.millitm || times == start.time){
        ftime(&start);
        for(int i = 2; i < MAX; i++){
            ftime(&start);
            arr[i] = arr[i-1] + arr[i-2];
        }
    };
    printf("Fibonacci dizisi: ");
    for(int i = 0; i < MAX; i++){
        printf("%llu ", arr[i]);
    }
}

