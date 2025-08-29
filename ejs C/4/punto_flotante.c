#include <stdio.h>

int main(){
    float f = 0.1F;
    double d = 0.1;

    printf("%f \n", d);
    printf("%f \n", f);


    int fi = (int) f;
    int di = (int) d;

    printf("%d \n", di);
    printf("%d \n", fi);
    return 0;
}