#include <stdio.h>

void rotacion(int arr[], int n, int tamano) {
    int j = 0;
    while (j<n) {
        int rota = arr[0];
        for(int i = 1; i<tamano;i++) {
            arr[i-1] = arr[i];
        }
        arr[tamano-1] = rota;
        j++;
    }
}

int main(){
    int arr[4] = {1,2,3,4};
    
    rotacion(arr,2,sizeof(arr)/sizeof(arr[0]));

    for (int i =0;i<4;i++) {
        printf("%d\n",arr[i]);
    }

    return 0;
}
