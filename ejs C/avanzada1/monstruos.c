#include <stdio.h>

typedef struct {
        char nombre[100];
        int vida;
        double ataque;
        double defensa;
    } monstruo_t
;

monstruo_t evolution (monstruo_t monstruo) {
    monstruo.ataque += 10;
    monstruo.defensa += 10;
    return monstruo;
}

int main(){
    
    
    monstruo_t monstruos[] = {
        {"Juan",10,20,20},
        {"Mario",20,30,30}
    };

    for (int i =0; i<2;i++) {

    printf("Nombre:%s Vida:%d\n", monstruos[i].nombre, monstruos[i].vida);

    }


    return 0;
}
