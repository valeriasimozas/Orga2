#include <stdio.h>
#include <stdlib.h>


void tirar_dados (int arr[]){
    for (int i=0; i<100; i++){
        int r = 1 + rand() %6;
        arr[r-1] ++;
    }
}

int main(){
    int arr[6] = {0};

    tirar_dados(arr);

    for (int i=0; i<6; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
