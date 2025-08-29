#include <stdio.h>


int main() {
    printf("char: %lu bytes \n", sizeof(char));
    printf("unsigned char: %lu bytes \n", sizeof(unsigned char));
    printf("short: %lu bytes \n", sizeof(short));
    printf("unsigned short: %lu bytes \n", sizeof(unsigned short));
    printf("int: %lu bytes \n", sizeof(int));
    printf("unsigned: %lu bytes \n",sizeof(unsigned));
    printf("long: %lu bytes \n", sizeof(long));
    printf("unsigned long: %lu bytes \n", sizeof(unsigned long));
    return 0;

}